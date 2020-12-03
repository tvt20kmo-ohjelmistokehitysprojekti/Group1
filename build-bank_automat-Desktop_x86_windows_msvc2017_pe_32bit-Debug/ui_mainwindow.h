/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "loginpage.h"
#include "menupage.h"
#include "paycreditpage.h"
#include "saldopage.h"
#include "transactpage.h"
#include "withdrawpage.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    LoginPage *loginPage;
    MenuPage *menuPage;
    SaldoPage *saldoPage;
    WithdrawPage *withdrawPage;
    TransactPage *transactPage;
    PayCreditPage *payCreditPage;
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
"	font: 16pt \"Squada One\";\n"
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
"	font: 16pt \"Squada One\";\n"
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
        loginPage = new LoginPage();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        stackedWidget->addWidget(loginPage);
        menuPage = new MenuPage();
        menuPage->setObjectName(QString::fromUtf8("menuPage"));
        stackedWidget->addWidget(menuPage);
        saldoPage = new SaldoPage();
        saldoPage->setObjectName(QString::fromUtf8("saldoPage"));
        stackedWidget->addWidget(saldoPage);
        withdrawPage = new WithdrawPage();
        withdrawPage->setObjectName(QString::fromUtf8("withdrawPage"));
        stackedWidget->addWidget(withdrawPage);
        transactPage = new TransactPage();
        transactPage->setObjectName(QString::fromUtf8("transactPage"));
        stackedWidget->addWidget(transactPage);
        payCreditPage = new PayCreditPage();
        payCreditPage->setObjectName(QString::fromUtf8("payCreditPage"));
        stackedWidget->addWidget(payCreditPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
