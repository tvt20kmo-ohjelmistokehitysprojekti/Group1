/********************************************************************************
** Form generated from reading UI file 'menupage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPAGE_H
#define UI_MENUPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPage
{
public:
    QLabel *label_5;
    QPushButton *Btn_Withdraw;
    QPushButton *Btn_Saldo;
    QPushButton *Btn_PayCredit;
    QPushButton *Btn_Transacts;
    QPushButton *Btn_LogOut;

    void setupUi(QWidget *MenuPage)
    {
        if (MenuPage->objectName().isEmpty())
            MenuPage->setObjectName(QString::fromUtf8("MenuPage"));
        MenuPage->resize(911, 641);
        MenuPage->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	\n"
"	font: 16pt \"Squada One\";\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 grey);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"}\n"
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
        label_5 = new QLabel(MenuPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 60, 221, 41));
        label_5->setStyleSheet(QString::fromUtf8("border-color: none;"));
        label_5->setAlignment(Qt::AlignCenter);
        Btn_Withdraw = new QPushButton(MenuPage);
        Btn_Withdraw->setObjectName(QString::fromUtf8("Btn_Withdraw"));
        Btn_Withdraw->setGeometry(QRect(340, 140, 211, 31));
        Btn_Withdraw->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        Btn_Saldo = new QPushButton(MenuPage);
        Btn_Saldo->setObjectName(QString::fromUtf8("Btn_Saldo"));
        Btn_Saldo->setGeometry(QRect(340, 210, 211, 31));
        Btn_Saldo->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        Btn_PayCredit = new QPushButton(MenuPage);
        Btn_PayCredit->setObjectName(QString::fromUtf8("Btn_PayCredit"));
        Btn_PayCredit->setGeometry(QRect(340, 350, 211, 31));
        Btn_PayCredit->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        Btn_Transacts = new QPushButton(MenuPage);
        Btn_Transacts->setObjectName(QString::fromUtf8("Btn_Transacts"));
        Btn_Transacts->setGeometry(QRect(340, 280, 211, 31));
        Btn_Transacts->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        Btn_LogOut = new QPushButton(MenuPage);
        Btn_LogOut->setObjectName(QString::fromUtf8("Btn_LogOut"));
        Btn_LogOut->setGeometry(QRect(340, 410, 211, 31));
        Btn_LogOut->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(MenuPage);

        QMetaObject::connectSlotsByName(MenuPage);
    } // setupUi

    void retranslateUi(QWidget *MenuPage)
    {
        MenuPage->setWindowTitle(QCoreApplication::translate("MenuPage", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("MenuPage", "VALITSE TOIMINTO", nullptr));
        Btn_Withdraw->setText(QCoreApplication::translate("MenuPage", "NOSTO", nullptr));
        Btn_Saldo->setText(QCoreApplication::translate("MenuPage", "SALDO", nullptr));
        Btn_PayCredit->setText(QCoreApplication::translate("MenuPage", "CREDITIN MAKSU", nullptr));
        Btn_Transacts->setText(QCoreApplication::translate("MenuPage", "TAPAHTUMAT", nullptr));
        Btn_LogOut->setText(QCoreApplication::translate("MenuPage", "KIRJAUDU ULOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPage: public Ui_MenuPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPAGE_H
