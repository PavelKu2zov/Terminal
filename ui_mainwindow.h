/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionConfigure;
    QAction *actionClear;
    QAction *actionQuit;
    QAction *actionGetData;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QDoubleSpinBox *Kp_ui;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QDoubleSpinBox *Ki_ui;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QDoubleSpinBox *Kd_ui;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *angle_ui;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_9;
    QTextBrowser *a_x;
    QTextBrowser *a_x_deg;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QTextBrowser *a_y;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QTextBrowser *a_z;
    QRadioButton *WriteFile;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *g_x;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *g_y;
    QTextBrowser *g_y_deg;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QTextBrowser *g_z;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QLabel *label;
    QTextBrowser *thrust;
    QSplitter *splitter_2;
    QLabel *label_2;
    QTextBrowser *speed;
    QSplitter *splitter_4;
    QLabel *label_4;
    QTextBrowser *current;
    QSplitter *splitter_3;
    QLabel *label_3;
    QSpinBox *gas;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *CmdToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(699, 583);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        actionGetData = new QAction(MainWindow);
        actionGetData->setObjectName(QString::fromUtf8("actionGetData"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("C:/Users/Pasha/Pictures/kget.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGetData->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setPointSize(12);
        label_11->setFont(font);

        horizontalLayout_8->addWidget(label_11);

        Kp_ui = new QDoubleSpinBox(groupBox_5);
        Kp_ui->setObjectName(QString::fromUtf8("Kp_ui"));
        Kp_ui->setMaximum(500.000000000000000);
        Kp_ui->setSingleStep(0.200000000000000);

        horizontalLayout_8->addWidget(Kp_ui);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_9->addWidget(label_12);

        Ki_ui = new QDoubleSpinBox(groupBox_5);
        Ki_ui->setObjectName(QString::fromUtf8("Ki_ui"));
        Ki_ui->setMaximum(500.000000000000000);
        Ki_ui->setSingleStep(0.010000000000000);

        horizontalLayout_9->addWidget(Ki_ui);


        gridLayout->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_10->addWidget(label_13);

        Kd_ui = new QDoubleSpinBox(groupBox_5);
        Kd_ui->setObjectName(QString::fromUtf8("Kd_ui"));
        Kd_ui->setMaximum(500.000000000000000);
        Kd_ui->setSingleStep(10.000000000000000);

        horizontalLayout_10->addWidget(Kd_ui);


        gridLayout->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        angle_ui = new QTextBrowser(groupBox);
        angle_ui->setObjectName(QString::fromUtf8("angle_ui"));
        angle_ui->setMaximumSize(QSize(70, 20));
        angle_ui->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_6->addWidget(angle_ui);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(120, 200));
        groupBox_2->setMaximumSize(QSize(120, 200));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(30, 20));
        QFont font1;
        font1.setPointSize(14);
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        a_x = new QTextBrowser(groupBox_2);
        a_x->setObjectName(QString::fromUtf8("a_x"));
        a_x->setMaximumSize(QSize(70, 20));
        a_x->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        a_x->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_9->addWidget(a_x);

        a_x_deg = new QTextBrowser(groupBox_2);
        a_x_deg->setObjectName(QString::fromUtf8("a_x_deg"));
        a_x_deg->setMaximumSize(QSize(70, 20));
        a_x_deg->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_9->addWidget(a_x_deg);


        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);

        a_y = new QTextBrowser(groupBox_2);
        a_y->setObjectName(QString::fromUtf8("a_y"));
        a_y->setMaximumSize(QSize(70, 20));
        a_y->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_3->addWidget(a_y);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_4->addWidget(label_8);

        a_z = new QTextBrowser(groupBox_2);
        a_z->setObjectName(QString::fromUtf8("a_z"));
        a_z->setMaximumSize(QSize(70, 20));
        a_z->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_4->addWidget(a_z);


        verticalLayout_3->addLayout(horizontalLayout_4);

        WriteFile = new QRadioButton(groupBox_2);
        WriteFile->setObjectName(QString::fromUtf8("WriteFile"));

        verticalLayout_3->addWidget(WriteFile);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(120, 200));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        g_x = new QTextBrowser(groupBox_4);
        g_x->setObjectName(QString::fromUtf8("g_x"));
        g_x->setMaximumSize(QSize(70, 20));
        g_x->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_7->addWidget(g_x);

        textBrowser = new QTextBrowser(groupBox_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(70, 20));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_7->addWidget(textBrowser);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_6->addWidget(label_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        g_y = new QTextBrowser(groupBox_4);
        g_y->setObjectName(QString::fromUtf8("g_y"));
        g_y->setMaximumSize(QSize(70, 20));
        QFont font2;
        font2.setPointSize(8);
        g_y->setFont(font2);
        g_y->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_8->addWidget(g_y);

        g_y_deg = new QTextBrowser(groupBox_4);
        g_y_deg->setObjectName(QString::fromUtf8("g_y_deg"));
        g_y_deg->setMaximumSize(QSize(70, 20));
        g_y_deg->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_8->addWidget(g_y_deg);


        horizontalLayout_6->addLayout(verticalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        horizontalLayout_7->addWidget(label_10);

        g_z = new QTextBrowser(groupBox_4);
        g_z->setObjectName(QString::fromUtf8("g_z"));
        g_z->setMaximumSize(QSize(70, 20));
        g_z->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_7->addWidget(g_z);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(groupBox_4);


        horizontalLayout->addLayout(verticalLayout_6);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(200, 300));
        groupBox_3->setMaximumSize(QSize(200, 300));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(groupBox_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setMinimumSize(QSize(121, 0));
        splitter->setMaximumSize(QSize(135, 20));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 20));
        QFont font3;
        font3.setPointSize(10);
        label->setFont(font3);
        splitter->addWidget(label);
        thrust = new QTextBrowser(splitter);
        thrust->setObjectName(QString::fromUtf8("thrust"));
        thrust->setMaximumSize(QSize(80, 20));
        thrust->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        splitter->addWidget(thrust);

        verticalLayout_4->addWidget(splitter);

        splitter_2 = new QSplitter(groupBox_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 20));
        label_2->setFont(font3);
        splitter_2->addWidget(label_2);
        speed = new QTextBrowser(splitter_2);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setMaximumSize(QSize(80, 20));
        speed->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        splitter_2->addWidget(speed);

        verticalLayout_4->addWidget(splitter_2);

        splitter_4 = new QSplitter(groupBox_3);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(50, 20));
        label_4->setFont(font3);
        splitter_4->addWidget(label_4);
        current = new QTextBrowser(splitter_4);
        current->setObjectName(QString::fromUtf8("current"));
        current->setMaximumSize(QSize(80, 20));
        current->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        splitter_4->addWidget(current);

        verticalLayout_4->addWidget(splitter_4);

        splitter_3 = new QSplitter(groupBox_3);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 20));
        label_3->setFont(font3);
        splitter_3->addWidget(label_3);
        gas = new QSpinBox(splitter_3);
        gas->setObjectName(QString::fromUtf8("gas"));
        gas->setMaximumSize(QSize(60, 20));
        gas->setAccelerated(true);
        gas->setMinimum(0);
        gas->setMaximum(100);
        gas->setStepType(QAbstractSpinBox::DefaultStepType);
        splitter_3->addWidget(gas);

        verticalLayout_4->addWidget(splitter_3);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 699, 21));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QString::fromUtf8("menuCalls"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        CmdToolBar = new QToolBar(MainWindow);
        CmdToolBar->setObjectName(QString::fromUtf8("CmdToolBar"));
        CmdToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, CmdToolBar);

        menuBar->addAction(menuCalls->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addSeparator();
        menuCalls->addAction(actionQuit);
        menuTools->addAction(actionConfigure);
        menuTools->addAction(actionClear);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);
        mainToolBar->addAction(actionClear);
        CmdToolBar->addAction(actionGetData);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Simple Terminal", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About program", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
        actionConnect->setText(QApplication::translate("MainWindow", "C&onnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect to serial port", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionDisconnect->setText(QApplication::translate("MainWindow", "&Disconnect", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect from serial port", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDisconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionConfigure->setText(QApplication::translate("MainWindow", "&Configure", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConfigure->setToolTip(QApplication::translate("MainWindow", "Configure serial port", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionConfigure->setShortcut(QApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MainWindow", "C&lear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear data", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("MainWindow", "Alt+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionGetData->setText(QApplication::translate("MainWindow", "&GetData", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGetData->setToolTip(QApplication::translate("MainWindow", "Get data", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "BLDC", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\237\320\230\320\224 \321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Kp", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Ki", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Kd", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\220\320\272\321\201\320\265\320\273\320\265\321\200\320\276\320\274\320\265\321\202\321\200\321\213,g", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Z", nullptr));
        WriteFile->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\223\320\270\321\200\320\276\321\201\320\272\320\276\320\277\321\213,", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Z", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\242\321\217\320\263\320\260, \320\263", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\276\320\261/\320\274\320\270\320\275", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\242\320\276\320\272,\320\220", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\220\320\272\321\201.%", nullptr));
        menuCalls->setTitle(QApplication::translate("MainWindow", "Calls", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        CmdToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
