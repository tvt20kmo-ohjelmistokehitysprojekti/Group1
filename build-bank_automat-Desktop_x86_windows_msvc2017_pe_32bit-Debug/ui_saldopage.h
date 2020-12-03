/********************************************************************************
** Form generated from reading UI file 'saldopage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDOPAGE_H
#define UI_SALDOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaldoPage
{
public:
    QLabel *label_7;
    QPushButton *Btn_Takaisin;
    QLabel *label_8;
    QPushButton *Btn_Debit;
    QLabel *Label_Saldo;
    QPushButton *Btn_Credit;

    void setupUi(QWidget *SaldoPage)
    {
        if (SaldoPage->objectName().isEmpty())
            SaldoPage->setObjectName(QString::fromUtf8("SaldoPage"));
        SaldoPage->resize(911, 641);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SaldoPage->sizePolicy().hasHeightForWidth());
        SaldoPage->setSizePolicy(sizePolicy);
        SaldoPage->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        label_7 = new QLabel(SaldoPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 90, 221, 41));
        label_7->setStyleSheet(QString::fromUtf8("border-color: none;"));
        label_7->setAlignment(Qt::AlignCenter);
        Btn_Takaisin = new QPushButton(SaldoPage);
        Btn_Takaisin->setObjectName(QString::fromUtf8("Btn_Takaisin"));
        Btn_Takaisin->setGeometry(QRect(70, 430, 211, 31));
        Btn_Takaisin->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(SaldoPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 130, 61, 41));
        label_8->setStyleSheet(QString::fromUtf8("border-color: none;"));
        label_8->setAlignment(Qt::AlignCenter);
        Btn_Debit = new QPushButton(SaldoPage);
        Btn_Debit->setObjectName(QString::fromUtf8("Btn_Debit"));
        Btn_Debit->setGeometry(QRect(340, 200, 211, 31));
        Btn_Debit->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: lightblue;"));
        Label_Saldo = new QLabel(SaldoPage);
        Label_Saldo->setObjectName(QString::fromUtf8("Label_Saldo"));
        Label_Saldo->setGeometry(QRect(310, 130, 261, 41));
        Label_Saldo->setMinimumSize(QSize(0, 0));
        Label_Saldo->setMaximumSize(QSize(280, 60));
        Label_Saldo->setBaseSize(QSize(280, 60));
        Label_Saldo->setMouseTracking(false);
        Label_Saldo->setFocusPolicy(Qt::NoFocus);
        Label_Saldo->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;"));
        Label_Saldo->setFrameShape(QFrame::StyledPanel);
        Label_Saldo->setFrameShadow(QFrame::Sunken);
        Label_Saldo->setAlignment(Qt::AlignCenter);
        Btn_Credit = new QPushButton(SaldoPage);
        Btn_Credit->setObjectName(QString::fromUtf8("Btn_Credit"));
        Btn_Credit->setGeometry(QRect(340, 250, 211, 31));
        Btn_Credit->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: lightgreen;"));

        retranslateUi(SaldoPage);

        QMetaObject::connectSlotsByName(SaldoPage);
    } // setupUi

    void retranslateUi(QWidget *SaldoPage)
    {
        SaldoPage->setWindowTitle(QCoreApplication::translate("SaldoPage", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("SaldoPage", "K\303\204YTT\303\226TILIN SALDO", nullptr));
        Btn_Takaisin->setText(QCoreApplication::translate("SaldoPage", "TAKAISIN", nullptr));
        label_8->setText(QCoreApplication::translate("SaldoPage", "euroa", nullptr));
        Btn_Debit->setText(QCoreApplication::translate("SaldoPage", "DEBIT", nullptr));
        Label_Saldo->setText(QString());
        Btn_Credit->setText(QCoreApplication::translate("SaldoPage", "CREDIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaldoPage: public Ui_SaldoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDOPAGE_H
