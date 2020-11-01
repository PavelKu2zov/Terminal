QT += widgets serialport
QT       += core gui

requires(qtConfig(combobox))
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
TARGET = terminal
TEMPLATE = app

SOURCES += \
    jWrite.c \
    jsmn.c \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    settingsdialog.cpp \
    console.cpp

HEADERS += \
    jWrite.h \
    jsmn.h \
    mainwindow.h \
    qcustomplot.h \
    settingsdialog.h \
    console.h

FORMS += \
    mainwindow.ui \
    settingsdialog.ui

RESOURCES += \
    terminal.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/terminal
INSTALLS += target


