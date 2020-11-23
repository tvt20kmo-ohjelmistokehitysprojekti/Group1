/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Btn_8;
    QPushButton *Btn_5;
    QPushButton *Btn_9;
    QPushButton *Btn_4;
    QPushButton *Btn_2;
    QPushButton *Btn_1;
    QPushButton *Btn_3;
    QPushButton *Btn_6;
    QPushButton *Btn_7;
    QPushButton *Btn_0;
    QPushButton *Btn_STOP;
    QPushButton *Btn_OK;
    QLabel *LabelCardInput;
    QLabel *label;
    QPushButton *Btn_login;
    QLabel *LabelPinInput;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *Label_error;
    QWidget *page_2;
    QLabel *label_4;
    QPushButton *btn_Depit;
    QPushButton *btn_CREDIT;
    QWidget *page_3;
    QLabel *label_5;
    QPushButton *btn_NOSTO;
    QPushButton *btn_SALDO;
    QPushButton *btn_EVENTS;
    QPushButton *btn_PayCredit;
    QWidget *page_4;
    QLabel *label_6;
    QTextEdit *insert_Amount;
    QPushButton *insert_20euros;
    QPushButton *insert_20euros_2;
    QPushButton *insert_20euros_3;
    QPushButton *insert_20euros_6;
    QPushButton *insert_20euros_8;
    QPushButton *insert_20euros_9;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Btn_10;
    QPushButton *Btn_11;
    QPushButton *Btn_12;
    QPushButton *Btn_13;
    QPushButton *Btn_14;
    QPushButton *Btn_15;
    QPushButton *Btn_16;
    QPushButton *Btn_17;
    QPushButton *Btn_18;
    QPushButton *Btn_19;
    QPushButton *Btn_STOP_2;
    QPushButton *Btn_OK_2;
    QPushButton *btn_TAKAISIN;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(926, 691);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(926, 691));
        MainWindow->setMaximumSize(QSize(926, 691));
        MainWindow->setBaseSize(QSize(926, 691));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 911, 641));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	\n"
"	font: 16pt \"Maiandra GD\";\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 grey);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QLabel \n"
"{\n"
"	\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QLabel:focus\n"
"{\n"
"	border-color: red;\n"
"}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(580, 100, 301, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Btn_8 = new QPushButton(gridLayoutWidget);
        Btn_8->setObjectName(QString::fromUtf8("Btn_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Btn_8->sizePolicy().hasHeightForWidth());
        Btn_8->setSizePolicy(sizePolicy2);
        Btn_8->setMinimumSize(QSize(80, 60));
        Btn_8->setBaseSize(QSize(0, 0));
        Btn_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_8, 2, 2, 1, 1);

        Btn_5 = new QPushButton(gridLayoutWidget);
        Btn_5->setObjectName(QString::fromUtf8("Btn_5"));
        sizePolicy2.setHeightForWidth(Btn_5->sizePolicy().hasHeightForWidth());
        Btn_5->setSizePolicy(sizePolicy2);
        Btn_5->setMinimumSize(QSize(80, 60));
        Btn_5->setBaseSize(QSize(0, 0));
        Btn_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_5, 1, 2, 1, 1);

        Btn_9 = new QPushButton(gridLayoutWidget);
        Btn_9->setObjectName(QString::fromUtf8("Btn_9"));
        sizePolicy2.setHeightForWidth(Btn_9->sizePolicy().hasHeightForWidth());
        Btn_9->setSizePolicy(sizePolicy2);
        Btn_9->setMinimumSize(QSize(80, 60));
        Btn_9->setBaseSize(QSize(0, 0));
        Btn_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_9, 2, 3, 1, 1);

        Btn_4 = new QPushButton(gridLayoutWidget);
        Btn_4->setObjectName(QString::fromUtf8("Btn_4"));
        sizePolicy2.setHeightForWidth(Btn_4->sizePolicy().hasHeightForWidth());
        Btn_4->setSizePolicy(sizePolicy2);
        Btn_4->setMinimumSize(QSize(80, 60));
        Btn_4->setBaseSize(QSize(0, 0));
        Btn_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_4, 1, 1, 1, 1);

        Btn_2 = new QPushButton(gridLayoutWidget);
        Btn_2->setObjectName(QString::fromUtf8("Btn_2"));
        sizePolicy2.setHeightForWidth(Btn_2->sizePolicy().hasHeightForWidth());
        Btn_2->setSizePolicy(sizePolicy2);
        Btn_2->setMinimumSize(QSize(80, 60));
        Btn_2->setBaseSize(QSize(0, 0));
        Btn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_2, 0, 2, 1, 1);

        Btn_1 = new QPushButton(gridLayoutWidget);
        Btn_1->setObjectName(QString::fromUtf8("Btn_1"));
        sizePolicy2.setHeightForWidth(Btn_1->sizePolicy().hasHeightForWidth());
        Btn_1->setSizePolicy(sizePolicy2);
        Btn_1->setMinimumSize(QSize(80, 60));
        Btn_1->setBaseSize(QSize(0, 0));
        Btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_1, 0, 1, 1, 1);

        Btn_3 = new QPushButton(gridLayoutWidget);
        Btn_3->setObjectName(QString::fromUtf8("Btn_3"));
        sizePolicy2.setHeightForWidth(Btn_3->sizePolicy().hasHeightForWidth());
        Btn_3->setSizePolicy(sizePolicy2);
        Btn_3->setMinimumSize(QSize(80, 60));
        Btn_3->setBaseSize(QSize(0, 0));
        Btn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_3, 0, 3, 1, 1);

        Btn_6 = new QPushButton(gridLayoutWidget);
        Btn_6->setObjectName(QString::fromUtf8("Btn_6"));
        sizePolicy2.setHeightForWidth(Btn_6->sizePolicy().hasHeightForWidth());
        Btn_6->setSizePolicy(sizePolicy2);
        Btn_6->setMinimumSize(QSize(80, 60));
        Btn_6->setBaseSize(QSize(0, 0));
        Btn_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_6, 1, 3, 1, 1);

        Btn_7 = new QPushButton(gridLayoutWidget);
        Btn_7->setObjectName(QString::fromUtf8("Btn_7"));
        sizePolicy2.setHeightForWidth(Btn_7->sizePolicy().hasHeightForWidth());
        Btn_7->setSizePolicy(sizePolicy2);
        Btn_7->setMinimumSize(QSize(80, 60));
        Btn_7->setBaseSize(QSize(0, 0));
        Btn_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_7, 2, 1, 1, 1);

        Btn_0 = new QPushButton(gridLayoutWidget);
        Btn_0->setObjectName(QString::fromUtf8("Btn_0"));
        sizePolicy2.setHeightForWidth(Btn_0->sizePolicy().hasHeightForWidth());
        Btn_0->setSizePolicy(sizePolicy2);
        Btn_0->setMinimumSize(QSize(80, 60));
        Btn_0->setBaseSize(QSize(0, 0));
        Btn_0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_0, 3, 2, 1, 1);

        Btn_STOP = new QPushButton(gridLayoutWidget);
        Btn_STOP->setObjectName(QString::fromUtf8("Btn_STOP"));
        sizePolicy2.setHeightForWidth(Btn_STOP->sizePolicy().hasHeightForWidth());
        Btn_STOP->setSizePolicy(sizePolicy2);
        Btn_STOP->setMinimumSize(QSize(80, 60));
        Btn_STOP->setBaseSize(QSize(40, 40));
        Btn_STOP->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 0, 0);"));

        gridLayout->addWidget(Btn_STOP, 3, 1, 1, 1);

        Btn_OK = new QPushButton(gridLayoutWidget);
        Btn_OK->setObjectName(QString::fromUtf8("Btn_OK"));
        sizePolicy2.setHeightForWidth(Btn_OK->sizePolicy().hasHeightForWidth());
        Btn_OK->setSizePolicy(sizePolicy2);
        Btn_OK->setMinimumSize(QSize(80, 60));
        Btn_OK->setBaseSize(QSize(0, 0));
        Btn_OK->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(52, 225, 13);"));

        gridLayout->addWidget(Btn_OK, 3, 3, 1, 1);

        LabelCardInput = new QLabel(page);
        LabelCardInput->setObjectName(QString::fromUtf8("LabelCardInput"));
        LabelCardInput->setGeometry(QRect(80, 120, 280, 60));
        LabelCardInput->setMinimumSize(QSize(280, 60));
        LabelCardInput->setMaximumSize(QSize(280, 60));
        LabelCardInput->setBaseSize(QSize(280, 60));
        LabelCardInput->setMouseTracking(false);
        LabelCardInput->setFocusPolicy(Qt::ClickFocus);
        LabelCardInput->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;"));
        LabelCardInput->setFrameShape(QFrame::StyledPanel);
        LabelCardInput->setFrameShadow(QFrame::Sunken);
        LabelCardInput->setAlignment(Qt::AlignCenter);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 20, 331, 51));
        label->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label->setAlignment(Qt::AlignCenter);
        Btn_login = new QPushButton(page);
        Btn_login->setObjectName(QString::fromUtf8("Btn_login"));
        Btn_login->setGeometry(QRect(670, 440, 201, 41));
        Btn_login->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"\n"
"alternate-background-color: rgb(85, 170, 255);"));
        LabelPinInput = new QLabel(page);
        LabelPinInput->setObjectName(QString::fromUtf8("LabelPinInput"));
        LabelPinInput->setGeometry(QRect(80, 240, 280, 60));
        LabelPinInput->setMinimumSize(QSize(280, 60));
        LabelPinInput->setMaximumSize(QSize(280, 60));
        LabelPinInput->setBaseSize(QSize(280, 60));
        LabelPinInput->setMouseTracking(false);
        LabelPinInput->setFocusPolicy(Qt::ClickFocus);
        LabelPinInput->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;"));
        LabelPinInput->setFrameShape(QFrame::StyledPanel);
        LabelPinInput->setFrameShadow(QFrame::Sunken);
        LabelPinInput->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 210, 151, 21));
        label_2->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 90, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Label_error = new QLabel(page);
        Label_error->setObjectName(QString::fromUtf8("Label_error"));
        Label_error->setGeometry(QRect(80, 320, 331, 51));
        Label_error->setStyleSheet(QString::fromUtf8("border-style: none;"));
        Label_error->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 20, 131, 41));
        label_4->setStyleSheet(QString::fromUtf8("border: none;"));
        label_4->setLineWidth(0);
        btn_Depit = new QPushButton(page_2);
        btn_Depit->setObjectName(QString::fromUtf8("btn_Depit"));
        btn_Depit->setGeometry(QRect(360, 100, 211, 31));
        btn_Depit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        btn_CREDIT = new QPushButton(page_2);
        btn_CREDIT->setObjectName(QString::fromUtf8("btn_CREDIT"));
        btn_CREDIT->setGeometry(QRect(360, 170, 211, 31));
        btn_CREDIT->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 161, 0);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 20, 221, 41));
        label_5->setStyleSheet(QString::fromUtf8("border-color: none;"));
        btn_NOSTO = new QPushButton(page_3);
        btn_NOSTO->setObjectName(QString::fromUtf8("btn_NOSTO"));
        btn_NOSTO->setGeometry(QRect(360, 100, 211, 31));
        btn_NOSTO->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        btn_SALDO = new QPushButton(page_3);
        btn_SALDO->setObjectName(QString::fromUtf8("btn_SALDO"));
        btn_SALDO->setGeometry(QRect(360, 170, 211, 31));
        btn_SALDO->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        btn_EVENTS = new QPushButton(page_3);
        btn_EVENTS->setObjectName(QString::fromUtf8("btn_EVENTS"));
        btn_EVENTS->setGeometry(QRect(360, 240, 211, 31));
        btn_EVENTS->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        btn_PayCredit = new QPushButton(page_3);
        btn_PayCredit->setObjectName(QString::fromUtf8("btn_PayCredit"));
        btn_PayCredit->setGeometry(QRect(360, 310, 211, 31));
        btn_PayCredit->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 60, 301, 41));
        label_6->setStyleSheet(QString::fromUtf8("border-color: none;"));
        insert_Amount = new QTextEdit(page_4);
        insert_Amount->setObjectName(QString::fromUtf8("insert_Amount"));
        insert_Amount->setGeometry(QRect(70, 110, 291, 51));
        insert_20euros = new QPushButton(page_4);
        insert_20euros->setObjectName(QString::fromUtf8("insert_20euros"));
        insert_20euros->setGeometry(QRect(70, 180, 81, 61));
        insert_20euros->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;"));
        insert_20euros_2 = new QPushButton(page_4);
        insert_20euros_2->setObjectName(QString::fromUtf8("insert_20euros_2"));
        insert_20euros_2->setGeometry(QRect(170, 180, 81, 61));
        insert_20euros_2->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;"));
        insert_20euros_3 = new QPushButton(page_4);
        insert_20euros_3->setObjectName(QString::fromUtf8("insert_20euros_3"));
        insert_20euros_3->setGeometry(QRect(270, 180, 81, 61));
        insert_20euros_3->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;"));
        insert_20euros_6 = new QPushButton(page_4);
        insert_20euros_6->setObjectName(QString::fromUtf8("insert_20euros_6"));
        insert_20euros_6->setGeometry(QRect(170, 260, 81, 61));
        insert_20euros_6->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;"));
        insert_20euros_8 = new QPushButton(page_4);
        insert_20euros_8->setObjectName(QString::fromUtf8("insert_20euros_8"));
        insert_20euros_8->setGeometry(QRect(270, 260, 81, 61));
        insert_20euros_8->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;"));
        insert_20euros_9 = new QPushButton(page_4);
        insert_20euros_9->setObjectName(QString::fromUtf8("insert_20euros_9"));
        insert_20euros_9->setGeometry(QRect(70, 260, 81, 61));
        insert_20euros_9->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;"));
        gridLayoutWidget_2 = new QWidget(page_4);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(550, 90, 301, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Btn_10 = new QPushButton(gridLayoutWidget_2);
        Btn_10->setObjectName(QString::fromUtf8("Btn_10"));
        sizePolicy2.setHeightForWidth(Btn_10->sizePolicy().hasHeightForWidth());
        Btn_10->setSizePolicy(sizePolicy2);
        Btn_10->setMinimumSize(QSize(80, 60));
        Btn_10->setBaseSize(QSize(0, 0));
        Btn_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_10, 2, 2, 1, 1);

        Btn_11 = new QPushButton(gridLayoutWidget_2);
        Btn_11->setObjectName(QString::fromUtf8("Btn_11"));
        sizePolicy2.setHeightForWidth(Btn_11->sizePolicy().hasHeightForWidth());
        Btn_11->setSizePolicy(sizePolicy2);
        Btn_11->setMinimumSize(QSize(80, 60));
        Btn_11->setBaseSize(QSize(0, 0));
        Btn_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_11, 1, 2, 1, 1);

        Btn_12 = new QPushButton(gridLayoutWidget_2);
        Btn_12->setObjectName(QString::fromUtf8("Btn_12"));
        sizePolicy2.setHeightForWidth(Btn_12->sizePolicy().hasHeightForWidth());
        Btn_12->setSizePolicy(sizePolicy2);
        Btn_12->setMinimumSize(QSize(80, 60));
        Btn_12->setBaseSize(QSize(0, 0));
        Btn_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_12, 2, 3, 1, 1);

        Btn_13 = new QPushButton(gridLayoutWidget_2);
        Btn_13->setObjectName(QString::fromUtf8("Btn_13"));
        sizePolicy2.setHeightForWidth(Btn_13->sizePolicy().hasHeightForWidth());
        Btn_13->setSizePolicy(sizePolicy2);
        Btn_13->setMinimumSize(QSize(80, 60));
        Btn_13->setBaseSize(QSize(0, 0));
        Btn_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_13, 1, 1, 1, 1);

        Btn_14 = new QPushButton(gridLayoutWidget_2);
        Btn_14->setObjectName(QString::fromUtf8("Btn_14"));
        sizePolicy2.setHeightForWidth(Btn_14->sizePolicy().hasHeightForWidth());
        Btn_14->setSizePolicy(sizePolicy2);
        Btn_14->setMinimumSize(QSize(80, 60));
        Btn_14->setBaseSize(QSize(0, 0));
        Btn_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_14, 0, 2, 1, 1);

        Btn_15 = new QPushButton(gridLayoutWidget_2);
        Btn_15->setObjectName(QString::fromUtf8("Btn_15"));
        sizePolicy2.setHeightForWidth(Btn_15->sizePolicy().hasHeightForWidth());
        Btn_15->setSizePolicy(sizePolicy2);
        Btn_15->setMinimumSize(QSize(80, 60));
        Btn_15->setBaseSize(QSize(0, 0));
        Btn_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_15, 0, 1, 1, 1);

        Btn_16 = new QPushButton(gridLayoutWidget_2);
        Btn_16->setObjectName(QString::fromUtf8("Btn_16"));
        sizePolicy2.setHeightForWidth(Btn_16->sizePolicy().hasHeightForWidth());
        Btn_16->setSizePolicy(sizePolicy2);
        Btn_16->setMinimumSize(QSize(80, 60));
        Btn_16->setBaseSize(QSize(0, 0));
        Btn_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_16, 0, 3, 1, 1);

        Btn_17 = new QPushButton(gridLayoutWidget_2);
        Btn_17->setObjectName(QString::fromUtf8("Btn_17"));
        sizePolicy2.setHeightForWidth(Btn_17->sizePolicy().hasHeightForWidth());
        Btn_17->setSizePolicy(sizePolicy2);
        Btn_17->setMinimumSize(QSize(80, 60));
        Btn_17->setBaseSize(QSize(0, 0));
        Btn_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_17, 1, 3, 1, 1);

        Btn_18 = new QPushButton(gridLayoutWidget_2);
        Btn_18->setObjectName(QString::fromUtf8("Btn_18"));
        sizePolicy2.setHeightForWidth(Btn_18->sizePolicy().hasHeightForWidth());
        Btn_18->setSizePolicy(sizePolicy2);
        Btn_18->setMinimumSize(QSize(80, 60));
        Btn_18->setBaseSize(QSize(0, 0));
        Btn_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_18, 2, 1, 1, 1);

        Btn_19 = new QPushButton(gridLayoutWidget_2);
        Btn_19->setObjectName(QString::fromUtf8("Btn_19"));
        sizePolicy2.setHeightForWidth(Btn_19->sizePolicy().hasHeightForWidth());
        Btn_19->setSizePolicy(sizePolicy2);
        Btn_19->setMinimumSize(QSize(80, 60));
        Btn_19->setBaseSize(QSize(0, 0));
        Btn_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(Btn_19, 3, 2, 1, 1);

        Btn_STOP_2 = new QPushButton(gridLayoutWidget_2);
        Btn_STOP_2->setObjectName(QString::fromUtf8("Btn_STOP_2"));
        sizePolicy2.setHeightForWidth(Btn_STOP_2->sizePolicy().hasHeightForWidth());
        Btn_STOP_2->setSizePolicy(sizePolicy2);
        Btn_STOP_2->setMinimumSize(QSize(80, 60));
        Btn_STOP_2->setBaseSize(QSize(40, 40));
        Btn_STOP_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        gridLayout_2->addWidget(Btn_STOP_2, 3, 1, 1, 1);

        Btn_OK_2 = new QPushButton(gridLayoutWidget_2);
        Btn_OK_2->setObjectName(QString::fromUtf8("Btn_OK_2"));
        sizePolicy2.setHeightForWidth(Btn_OK_2->sizePolicy().hasHeightForWidth());
        Btn_OK_2->setSizePolicy(sizePolicy2);
        Btn_OK_2->setMinimumSize(QSize(80, 60));
        Btn_OK_2->setBaseSize(QSize(0, 0));
        Btn_OK_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(52, 225, 13);"));

        gridLayout_2->addWidget(Btn_OK_2, 3, 3, 1, 1);

        btn_TAKAISIN = new QPushButton(page_4);
        btn_TAKAISIN->setObjectName(QString::fromUtf8("btn_TAKAISIN"));
        btn_TAKAISIN->setGeometry(QRect(70, 450, 211, 31));
        btn_TAKAISIN->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Application", nullptr));
        Btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Btn_STOP->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        Btn_OK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        LabelCardInput->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "KIRJAUDU SIS\303\204\303\204N", nullptr));
        Btn_login->setText(QCoreApplication::translate("MainWindow", "KIRJAUDU", nullptr));
        LabelPinInput->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "TUNNUSLUKU", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "KORTIN ID", nullptr));
        Label_error->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "VALITSE TILI", nullptr));
        btn_Depit->setText(QCoreApplication::translate("MainWindow", "DEBIT", nullptr));
        btn_CREDIT->setText(QCoreApplication::translate("MainWindow", "CREDIT", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "VALITSE TOIMINTO", nullptr));
        btn_NOSTO->setText(QCoreApplication::translate("MainWindow", "NOSTO", nullptr));
        btn_SALDO->setText(QCoreApplication::translate("MainWindow", "SALDO", nullptr));
        btn_EVENTS->setText(QCoreApplication::translate("MainWindow", "TAPAHTUMAT", nullptr));
        btn_PayCredit->setText(QCoreApplication::translate("MainWindow", "CREDITIN MAKSU", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "SY\303\226T\303\204 NOSTETTAVA SUMMA", nullptr));
        insert_20euros->setText(QCoreApplication::translate("MainWindow", "20\342\202\254", nullptr));
        insert_20euros_2->setText(QCoreApplication::translate("MainWindow", "40\342\202\254", nullptr));
        insert_20euros_3->setText(QCoreApplication::translate("MainWindow", "50\342\202\254", nullptr));
        insert_20euros_6->setText(QCoreApplication::translate("MainWindow", "100\342\202\254", nullptr));
        insert_20euros_8->setText(QCoreApplication::translate("MainWindow", "150\342\202\254", nullptr));
        insert_20euros_9->setText(QCoreApplication::translate("MainWindow", "80\342\202\254", nullptr));
        Btn_10->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Btn_11->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Btn_12->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Btn_13->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Btn_14->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Btn_15->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Btn_16->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Btn_17->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Btn_18->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Btn_19->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Btn_STOP_2->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        Btn_OK_2->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        btn_TAKAISIN->setText(QCoreApplication::translate("MainWindow", "TAKAISIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
