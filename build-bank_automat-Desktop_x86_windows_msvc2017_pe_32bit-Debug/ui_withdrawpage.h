/********************************************************************************
** Form generated from reading UI file 'withdrawpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWPAGE_H
#define UI_WITHDRAWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WithdrawPage
{
public:
    QPushButton *insert_20euros;
    QPushButton *insert_20euros_6;
    QPushButton *Btn_Takaisin;
    QPushButton *insert_20euros_9;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *Btn_20;
    QPushButton *Btn_21;
    QPushButton *Btn_22;
    QPushButton *Btn_23;
    QPushButton *Btn_24;
    QPushButton *Btn_25;
    QPushButton *Btn_26;
    QPushButton *Btn_27;
    QPushButton *Btn_28;
    QPushButton *Btn_29;
    QPushButton *Btn_STOP_3;
    QPushButton *Btn_OK_3;
    QPushButton *insert_20euros_3;
    QPushButton *insert_20euros_2;
    QLabel *label_6;
    QPushButton *insert_20euros_8;
    QTextEdit *insert_Amount;

    void setupUi(QWidget *WithdrawPage)
    {
        if (WithdrawPage->objectName().isEmpty())
            WithdrawPage->setObjectName(QString::fromUtf8("WithdrawPage"));
        WithdrawPage->resize(911, 641);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WithdrawPage->sizePolicy().hasHeightForWidth());
        WithdrawPage->setSizePolicy(sizePolicy);
        WithdrawPage->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	font: 16pt \"Squada One\";\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 white, stop: 1 grey);\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QLabel \n"
"{	\n"
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
        insert_20euros = new QPushButton(WithdrawPage);
        insert_20euros->setObjectName(QString::fromUtf8("insert_20euros"));
        insert_20euros->setGeometry(QRect(70, 170, 81, 61));
        insert_20euros->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));
        insert_20euros_6 = new QPushButton(WithdrawPage);
        insert_20euros_6->setObjectName(QString::fromUtf8("insert_20euros_6"));
        insert_20euros_6->setGeometry(QRect(170, 250, 81, 61));
        insert_20euros_6->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));
        Btn_Takaisin = new QPushButton(WithdrawPage);
        Btn_Takaisin->setObjectName(QString::fromUtf8("Btn_Takaisin"));
        Btn_Takaisin->setGeometry(QRect(70, 400, 211, 31));
        Btn_Takaisin->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        insert_20euros_9 = new QPushButton(WithdrawPage);
        insert_20euros_9->setObjectName(QString::fromUtf8("insert_20euros_9"));
        insert_20euros_9->setGeometry(QRect(70, 250, 81, 61));
        insert_20euros_9->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));
        gridLayoutWidget_2 = new QWidget(WithdrawPage);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(550, 80, 301, 321));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Btn_20 = new QPushButton(gridLayoutWidget_2);
        Btn_20->setObjectName(QString::fromUtf8("Btn_20"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Btn_20->sizePolicy().hasHeightForWidth());
        Btn_20->setSizePolicy(sizePolicy1);
        Btn_20->setMinimumSize(QSize(80, 60));
        Btn_20->setBaseSize(QSize(0, 0));
        Btn_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_20, 2, 2, 1, 1);

        Btn_21 = new QPushButton(gridLayoutWidget_2);
        Btn_21->setObjectName(QString::fromUtf8("Btn_21"));
        sizePolicy1.setHeightForWidth(Btn_21->sizePolicy().hasHeightForWidth());
        Btn_21->setSizePolicy(sizePolicy1);
        Btn_21->setMinimumSize(QSize(80, 60));
        Btn_21->setBaseSize(QSize(0, 0));
        Btn_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_21, 1, 2, 1, 1);

        Btn_22 = new QPushButton(gridLayoutWidget_2);
        Btn_22->setObjectName(QString::fromUtf8("Btn_22"));
        sizePolicy1.setHeightForWidth(Btn_22->sizePolicy().hasHeightForWidth());
        Btn_22->setSizePolicy(sizePolicy1);
        Btn_22->setMinimumSize(QSize(80, 60));
        Btn_22->setBaseSize(QSize(0, 0));
        Btn_22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_22, 2, 3, 1, 1);

        Btn_23 = new QPushButton(gridLayoutWidget_2);
        Btn_23->setObjectName(QString::fromUtf8("Btn_23"));
        sizePolicy1.setHeightForWidth(Btn_23->sizePolicy().hasHeightForWidth());
        Btn_23->setSizePolicy(sizePolicy1);
        Btn_23->setMinimumSize(QSize(80, 60));
        Btn_23->setBaseSize(QSize(0, 0));
        Btn_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_23, 1, 1, 1, 1);

        Btn_24 = new QPushButton(gridLayoutWidget_2);
        Btn_24->setObjectName(QString::fromUtf8("Btn_24"));
        sizePolicy1.setHeightForWidth(Btn_24->sizePolicy().hasHeightForWidth());
        Btn_24->setSizePolicy(sizePolicy1);
        Btn_24->setMinimumSize(QSize(80, 60));
        Btn_24->setBaseSize(QSize(0, 0));
        Btn_24->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_24, 0, 2, 1, 1);

        Btn_25 = new QPushButton(gridLayoutWidget_2);
        Btn_25->setObjectName(QString::fromUtf8("Btn_25"));
        sizePolicy1.setHeightForWidth(Btn_25->sizePolicy().hasHeightForWidth());
        Btn_25->setSizePolicy(sizePolicy1);
        Btn_25->setMinimumSize(QSize(80, 60));
        Btn_25->setBaseSize(QSize(0, 0));
        Btn_25->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_25, 0, 1, 1, 1);

        Btn_26 = new QPushButton(gridLayoutWidget_2);
        Btn_26->setObjectName(QString::fromUtf8("Btn_26"));
        sizePolicy1.setHeightForWidth(Btn_26->sizePolicy().hasHeightForWidth());
        Btn_26->setSizePolicy(sizePolicy1);
        Btn_26->setMinimumSize(QSize(80, 60));
        Btn_26->setBaseSize(QSize(0, 0));
        Btn_26->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_26, 0, 3, 1, 1);

        Btn_27 = new QPushButton(gridLayoutWidget_2);
        Btn_27->setObjectName(QString::fromUtf8("Btn_27"));
        sizePolicy1.setHeightForWidth(Btn_27->sizePolicy().hasHeightForWidth());
        Btn_27->setSizePolicy(sizePolicy1);
        Btn_27->setMinimumSize(QSize(80, 60));
        Btn_27->setBaseSize(QSize(0, 0));
        Btn_27->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_27, 1, 3, 1, 1);

        Btn_28 = new QPushButton(gridLayoutWidget_2);
        Btn_28->setObjectName(QString::fromUtf8("Btn_28"));
        sizePolicy1.setHeightForWidth(Btn_28->sizePolicy().hasHeightForWidth());
        Btn_28->setSizePolicy(sizePolicy1);
        Btn_28->setMinimumSize(QSize(80, 60));
        Btn_28->setBaseSize(QSize(0, 0));
        Btn_28->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_28, 2, 1, 1, 1);

        Btn_29 = new QPushButton(gridLayoutWidget_2);
        Btn_29->setObjectName(QString::fromUtf8("Btn_29"));
        sizePolicy1.setHeightForWidth(Btn_29->sizePolicy().hasHeightForWidth());
        Btn_29->setSizePolicy(sizePolicy1);
        Btn_29->setMinimumSize(QSize(80, 60));
        Btn_29->setBaseSize(QSize(0, 0));
        Btn_29->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(Btn_29, 3, 2, 1, 1);

        Btn_STOP_3 = new QPushButton(gridLayoutWidget_2);
        Btn_STOP_3->setObjectName(QString::fromUtf8("Btn_STOP_3"));
        sizePolicy1.setHeightForWidth(Btn_STOP_3->sizePolicy().hasHeightForWidth());
        Btn_STOP_3->setSizePolicy(sizePolicy1);
        Btn_STOP_3->setMinimumSize(QSize(80, 60));
        Btn_STOP_3->setBaseSize(QSize(40, 40));
        Btn_STOP_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        gridLayout_3->addWidget(Btn_STOP_3, 3, 1, 1, 1);

        Btn_OK_3 = new QPushButton(gridLayoutWidget_2);
        Btn_OK_3->setObjectName(QString::fromUtf8("Btn_OK_3"));
        sizePolicy1.setHeightForWidth(Btn_OK_3->sizePolicy().hasHeightForWidth());
        Btn_OK_3->setSizePolicy(sizePolicy1);
        Btn_OK_3->setMinimumSize(QSize(80, 60));
        Btn_OK_3->setBaseSize(QSize(0, 0));
        Btn_OK_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(52, 225, 13);"));

        gridLayout_3->addWidget(Btn_OK_3, 3, 3, 1, 1);

        insert_20euros_3 = new QPushButton(WithdrawPage);
        insert_20euros_3->setObjectName(QString::fromUtf8("insert_20euros_3"));
        insert_20euros_3->setGeometry(QRect(270, 170, 81, 61));
        insert_20euros_3->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));
        insert_20euros_2 = new QPushButton(WithdrawPage);
        insert_20euros_2->setObjectName(QString::fromUtf8("insert_20euros_2"));
        insert_20euros_2->setGeometry(QRect(170, 170, 81, 61));
        insert_20euros_2->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));
        label_6 = new QLabel(WithdrawPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 50, 301, 41));
        label_6->setStyleSheet(QString::fromUtf8("border-color: none;"));
        insert_20euros_8 = new QPushButton(WithdrawPage);
        insert_20euros_8->setObjectName(QString::fromUtf8("insert_20euros_8"));
        insert_20euros_8->setGeometry(QRect(270, 250, 81, 61));
        insert_20euros_8->setStyleSheet(QString::fromUtf8(" border-color: none;\n"
"background-color:white;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));
        insert_Amount = new QTextEdit(WithdrawPage);
        insert_Amount->setObjectName(QString::fromUtf8("insert_Amount"));
        insert_Amount->setGeometry(QRect(70, 100, 291, 51));
        insert_Amount->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;\n"
"	font: 16pt \"Maiandra GD\";\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-width: 2px;\n"
"	border-radius: 5px;"));

        retranslateUi(WithdrawPage);

        QMetaObject::connectSlotsByName(WithdrawPage);
    } // setupUi

    void retranslateUi(QWidget *WithdrawPage)
    {
        WithdrawPage->setWindowTitle(QCoreApplication::translate("WithdrawPage", "Form", nullptr));
        insert_20euros->setText(QCoreApplication::translate("WithdrawPage", "20\342\202\254", nullptr));
        insert_20euros_6->setText(QCoreApplication::translate("WithdrawPage", "100\342\202\254", nullptr));
        Btn_Takaisin->setText(QCoreApplication::translate("WithdrawPage", "TAKAISIN", nullptr));
        insert_20euros_9->setText(QCoreApplication::translate("WithdrawPage", "80\342\202\254", nullptr));
        Btn_20->setText(QCoreApplication::translate("WithdrawPage", "8", nullptr));
        Btn_21->setText(QCoreApplication::translate("WithdrawPage", "5", nullptr));
        Btn_22->setText(QCoreApplication::translate("WithdrawPage", "9", nullptr));
        Btn_23->setText(QCoreApplication::translate("WithdrawPage", "4", nullptr));
        Btn_24->setText(QCoreApplication::translate("WithdrawPage", "2", nullptr));
        Btn_25->setText(QCoreApplication::translate("WithdrawPage", "1", nullptr));
        Btn_26->setText(QCoreApplication::translate("WithdrawPage", "3", nullptr));
        Btn_27->setText(QCoreApplication::translate("WithdrawPage", "6", nullptr));
        Btn_28->setText(QCoreApplication::translate("WithdrawPage", "7", nullptr));
        Btn_29->setText(QCoreApplication::translate("WithdrawPage", "0", nullptr));
        Btn_STOP_3->setText(QCoreApplication::translate("WithdrawPage", "<", nullptr));
        Btn_OK_3->setText(QCoreApplication::translate("WithdrawPage", "OK", nullptr));
        insert_20euros_3->setText(QCoreApplication::translate("WithdrawPage", "50\342\202\254", nullptr));
        insert_20euros_2->setText(QCoreApplication::translate("WithdrawPage", "40\342\202\254", nullptr));
        label_6->setText(QCoreApplication::translate("WithdrawPage", "SY\303\226T\303\204 NOSTETTAVA SUMMA", nullptr));
        insert_20euros_8->setText(QCoreApplication::translate("WithdrawPage", "150\342\202\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WithdrawPage: public Ui_WithdrawPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWPAGE_H
