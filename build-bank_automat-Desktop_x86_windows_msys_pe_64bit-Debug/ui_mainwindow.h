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
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


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
        btn_Depit->setText(QCoreApplication::translate("MainWindow", "DEPIT", nullptr));
        btn_CREDIT->setText(QCoreApplication::translate("MainWindow", "CREDIT", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "VALITSE TOIMINTO", nullptr));
        btn_NOSTO->setText(QCoreApplication::translate("MainWindow", "NOSTO", nullptr));
        btn_SALDO->setText(QCoreApplication::translate("MainWindow", "SALDO", nullptr));
        btn_EVENTS->setText(QCoreApplication::translate("MainWindow", "TAPAHTUMAT", nullptr));
        btn_PayCredit->setText(QCoreApplication::translate("MainWindow", "CREDITIN MAKSU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
