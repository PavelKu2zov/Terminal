#include "stm32f10x.h"
#include "Init.h"
#include "jsmn.h"
#include <string.h>
#include <stdlib.h>


  


/*
------------------------------ Разбор пакета ----------------------------------- 

prtcl_rt437TypeDef
     - uint32_t Code_Msg;
     - uint32_t LenJsonePacket;
     - uint8_t *JsonePacket;

     
Circular_buffTypeDef:
     - uint8_t     	*p;                 // указатель на кольцевой буфер
     - uint32_t          *StartAdr;          // указатель на стартовый адрес кольцевого буфера
     - uint32_t         Size;               // размер кольцевого буфера типа uint8_t

*/
TypeDefStatusReceive ParsingStream( Circular_buffTypeDef *pCircular_buff, uint8_t Id,JsoneTypeDef *pJsone)
{
  
  
  static StatusReceiveTypeDef StatusReceive;
  
  uint8_t temp=0;
  uint8_t Crc8temp=0;
 
  
  StatusReceive.State = SEARCH_MARKER_START;
  
  StatusReceive.CurrentCRC8 = 0x00;


  


        // пока не догоним указатель для записи
  while ((uint32_t)(pCircular_buff->p_rd - pCircular_buff->StartAdr) != (pCircular_buff->Size - (uint32_t)pCircular_buff->p_cndtr))
      {
        switch ( StatusReceive.State )
        {
          case SEARCH_MARKER_START: //поиск маркера
                    if ( *pCircular_buff->p_rd == MARKER_START )
                      {
                        StatusReceive.State = ID;
                        pJsone->LenJsonePacket = 0;
                        StatusReceive.CurrentCRC8 = 0x00;
                      }
                    break;
          case ID: //определение id
                    if ( *pCircular_buff->p_rd == Id )
                      {
                        StatusReceive.State = CODE_MSG;
                        StatusReceive.CurrentCRC8 =  Crc_8(pCircular_buff->p_rd, StatusReceive.CurrentCRC8, 1);
                      }
                    else
                      {
                        StatusReceive.State = SEARCH_MARKER_START;
                      }
                    break;        
          case CODE_MSG:  // код сообщения : запрос параметра/установка параметра 
                    if (( *pCircular_buff->p_rd == SEND_NEW_PRM ) || ( *pCircular_buff ->p_rd == GET_CURRENT_PRM ))
                      {
                          StatusReceive.State = JSONE_STREAM;
                          StatusReceive.CurrentCRC8 =  Crc_8(pCircular_buff->p_rd, StatusReceive.CurrentCRC8, 1);
                      }
                    else StatusReceive.State = SEARCH_MARKER_START;
                    break;
          case JSONE_STREAM: // прием праметров в формате JSONE
                    if ( *pCircular_buff->p_rd == '\0' )
                    {
                      StatusReceive.CurrentCRC8 =  Crc_8((uint8_t*)pJsone->JsonePacket, StatusReceive.CurrentCRC8, pJsone->LenJsonePacket);
                      StatusReceive.CurrentCRC8 =  Crc_8(pCircular_buff->p_rd, StatusReceive.CurrentCRC8, 1);
                      temp =0; //Обнуляем счетчик для подстчета количества байт CRC8
                      Crc8temp=0;
                      StatusReceive.State = CRC8;
                    }
                    else 
                    {
                      pJsone->JsonePacket[pJsone->LenJsonePacket] = *pCircular_buff->p_rd;
                      if ( pJsone->LenJsonePacket < MAX_SIZE_JSONE_PACKET )
                       pJsone->LenJsonePacket++;
                      
                    }
                    break;
          case CRC8:       //контрольная сумма
                   temp++;
                   if (temp == 1)
                     Crc8temp |= atoi((char*)pCircular_buff->p_rd)<<4;
                   else if (temp == 2)
                         {
                           Crc8temp |= atoi((char*)pCircular_buff->p_rd);
                           if ( Crc8temp == StatusReceive.CurrentCRC8 )
                                StatusReceive.State = SEARCH_MARKER_END;
                           else
                             {
                                //return CRC error 
                             }
                         }
                   break;
          case SEARCH_MARKER_END: // поиск марке конца пакета
                            StatusReceive.State = SEARCH_MARKER_START;
                            return RECIEVE_SUCCESSFUL;
                            
                 break;
                   
        };
        // конец буфера?
        if ((uint32_t)(pCircular_buff->p_rd - pCircular_buff->StartAdr) == pCircular_buff->Size)
          pCircular_buff->p_rd = pCircular_buff->StartAdr;
        else
         pCircular_buff->p_rd++;
        
      }

if (StatusReceive.State == SEARCH_MARKER_START) 
  return NONE;
else  
  return TIMEOUT_ERROR;
}

uint8_t Crc_8(uint8_t *data_in, uint8_t currentCrc_8, uint32_t size)
{
  while (size != 0)
  {
    currentCrc_8 ^= *data_in;

   for (int i = 0;i<8;i++)
     currentCrc_8 = currentCrc_8 & 0x80 ? (currentCrc_8 << 1) ^ 0x31 : currentCrc_8 << 1;
     
    size--; 
  }

return currentCrc_8;
}


