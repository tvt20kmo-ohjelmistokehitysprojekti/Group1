/********************************************************************************
** Form generated from reading UI file 'transactpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTPAGE_H
#define UI_TRANSACTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactPage
{
public:
    QPushButton *Btn_Takaisin;
    QLabel *label_9;

    void setupUi(QWidget *TransactPage)
    {
        if (TransactPage->objectName().isEmpty())
            TransactPage->setObjectName(QString::fromUtf8("TransactPage"));
        TransactPage->resize(911, 641);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TransactPage->sizePolicy().hasHeightForWidth());
        TransactPage->setSizePolicy(sizePolicy);
        TransactPage->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        Btn_Takaisin = new QPushButton(TransactPage);
        Btn_Takaisin->setObjectName(QString::fromUtf8("Btn_Takaisin"));
        Btn_Takaisin->setGeometry(QRect(90, 420, 211, 31));
        Btn_Takaisin->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(TransactPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 40, 191, 41));
        label_9->setStyleSheet(QString::fromUtf8("border-color: none;"));

        retranslateUi(TransactPage);

        QMetaObject::connectSlotsByName(TransactPage);
    } // setupUi

    void retranslateUi(QWidget *TransactPage)
    {
        TransactPage->setWindowTitle(QCoreApplication::translate("TransactPage", "Form", nullptr));
        Btn_Takaisin->setText(QCoreApplication::translate("TransactPage", "TAKAISIN", nullptr));
        label_9->setText(QCoreApplication::translate("TransactPage", "TILITAPAHTUMAT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactPage: public Ui_TransactPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTPAGE_H
