/********************************************************************************
** Form generated from reading UI file 'paycreditpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYCREDITPAGE_H
#define UI_PAYCREDITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PayCreditPage
{
public:
    QPushButton *Btn_Takaisin;

    void setupUi(QWidget *PayCreditPage)
    {
        if (PayCreditPage->objectName().isEmpty())
            PayCreditPage->setObjectName(QString::fromUtf8("PayCreditPage"));
        PayCreditPage->resize(911, 641);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PayCreditPage->sizePolicy().hasHeightForWidth());
        PayCreditPage->setSizePolicy(sizePolicy);
        PayCreditPage->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	font: 16pt \"Squada One\";\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 grey);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"}\n"
"QLabel \n"
"{\n"
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
        Btn_Takaisin = new QPushButton(PayCreditPage);
        Btn_Takaisin->setObjectName(QString::fromUtf8("Btn_Takaisin"));
        Btn_Takaisin->setGeometry(QRect(90, 470, 211, 31));
        Btn_Takaisin->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(PayCreditPage);

        QMetaObject::connectSlotsByName(PayCreditPage);
    } // setupUi

    void retranslateUi(QWidget *PayCreditPage)
    {
        PayCreditPage->setWindowTitle(QCoreApplication::translate("PayCreditPage", "Form", nullptr));
        Btn_Takaisin->setText(QCoreApplication::translate("PayCreditPage", "TAKAISIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PayCreditPage: public Ui_PayCreditPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYCREDITPAGE_H
