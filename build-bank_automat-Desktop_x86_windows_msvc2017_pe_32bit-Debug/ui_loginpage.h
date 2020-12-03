/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *Btn_Login;
    QLabel *Label_CardInput;
    QLabel *Label_PinInput;
    QLabel *label_2;
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
    QLabel *Label_Error;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(911, 641);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginPage->sizePolicy().hasHeightForWidth());
        LoginPage->setSizePolicy(sizePolicy);
        LoginPage->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        label = new QLabel(LoginPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 30, 191, 31));
        label->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 90, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Btn_Login = new QPushButton(LoginPage);
        Btn_Login->setObjectName(QString::fromUtf8("Btn_Login"));
        Btn_Login->setGeometry(QRect(640, 430, 201, 41));
        Btn_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"\n"
"alternate-background-color: rgb(85, 170, 255);"));
        Label_CardInput = new QLabel(LoginPage);
        Label_CardInput->setObjectName(QString::fromUtf8("Label_CardInput"));
        Label_CardInput->setGeometry(QRect(60, 120, 280, 60));
        Label_CardInput->setMinimumSize(QSize(280, 60));
        Label_CardInput->setMaximumSize(QSize(280, 60));
        Label_CardInput->setBaseSize(QSize(280, 60));
        Label_CardInput->setMouseTracking(false);
        Label_CardInput->setFocusPolicy(Qt::ClickFocus);
        Label_CardInput->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;"));
        Label_CardInput->setFrameShape(QFrame::StyledPanel);
        Label_CardInput->setFrameShadow(QFrame::Sunken);
        Label_CardInput->setAlignment(Qt::AlignCenter);
        Label_PinInput = new QLabel(LoginPage);
        Label_PinInput->setObjectName(QString::fromUtf8("Label_PinInput"));
        Label_PinInput->setGeometry(QRect(60, 240, 280, 60));
        Label_PinInput->setMinimumSize(QSize(280, 60));
        Label_PinInput->setMaximumSize(QSize(280, 60));
        Label_PinInput->setBaseSize(QSize(280, 60));
        Label_PinInput->setMouseTracking(false);
        Label_PinInput->setFocusPolicy(Qt::ClickFocus);
        Label_PinInput->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;"));
        Label_PinInput->setFrameShape(QFrame::StyledPanel);
        Label_PinInput->setFrameShadow(QFrame::Sunken);
        Label_PinInput->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(LoginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 210, 151, 21));
        label_2->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayoutWidget = new QWidget(LoginPage);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(580, 80, 301, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Btn_8 = new QPushButton(gridLayoutWidget);
        Btn_8->setObjectName(QString::fromUtf8("Btn_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Btn_8->sizePolicy().hasHeightForWidth());
        Btn_8->setSizePolicy(sizePolicy1);
        Btn_8->setMinimumSize(QSize(80, 60));
        Btn_8->setBaseSize(QSize(0, 0));
        Btn_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_8, 2, 2, 1, 1);

        Btn_5 = new QPushButton(gridLayoutWidget);
        Btn_5->setObjectName(QString::fromUtf8("Btn_5"));
        sizePolicy1.setHeightForWidth(Btn_5->sizePolicy().hasHeightForWidth());
        Btn_5->setSizePolicy(sizePolicy1);
        Btn_5->setMinimumSize(QSize(80, 60));
        Btn_5->setBaseSize(QSize(0, 0));
        Btn_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_5, 1, 2, 1, 1);

        Btn_9 = new QPushButton(gridLayoutWidget);
        Btn_9->setObjectName(QString::fromUtf8("Btn_9"));
        sizePolicy1.setHeightForWidth(Btn_9->sizePolicy().hasHeightForWidth());
        Btn_9->setSizePolicy(sizePolicy1);
        Btn_9->setMinimumSize(QSize(80, 60));
        Btn_9->setBaseSize(QSize(0, 0));
        Btn_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_9, 2, 3, 1, 1);

        Btn_4 = new QPushButton(gridLayoutWidget);
        Btn_4->setObjectName(QString::fromUtf8("Btn_4"));
        sizePolicy1.setHeightForWidth(Btn_4->sizePolicy().hasHeightForWidth());
        Btn_4->setSizePolicy(sizePolicy1);
        Btn_4->setMinimumSize(QSize(80, 60));
        Btn_4->setBaseSize(QSize(0, 0));
        Btn_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_4, 1, 1, 1, 1);

        Btn_2 = new QPushButton(gridLayoutWidget);
        Btn_2->setObjectName(QString::fromUtf8("Btn_2"));
        sizePolicy1.setHeightForWidth(Btn_2->sizePolicy().hasHeightForWidth());
        Btn_2->setSizePolicy(sizePolicy1);
        Btn_2->setMinimumSize(QSize(80, 60));
        Btn_2->setBaseSize(QSize(0, 0));
        Btn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_2, 0, 2, 1, 1);

        Btn_1 = new QPushButton(gridLayoutWidget);
        Btn_1->setObjectName(QString::fromUtf8("Btn_1"));
        sizePolicy1.setHeightForWidth(Btn_1->sizePolicy().hasHeightForWidth());
        Btn_1->setSizePolicy(sizePolicy1);
        Btn_1->setMinimumSize(QSize(80, 60));
        Btn_1->setBaseSize(QSize(0, 0));
        Btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_1, 0, 1, 1, 1);

        Btn_3 = new QPushButton(gridLayoutWidget);
        Btn_3->setObjectName(QString::fromUtf8("Btn_3"));
        sizePolicy1.setHeightForWidth(Btn_3->sizePolicy().hasHeightForWidth());
        Btn_3->setSizePolicy(sizePolicy1);
        Btn_3->setMinimumSize(QSize(80, 60));
        Btn_3->setBaseSize(QSize(0, 0));
        Btn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_3, 0, 3, 1, 1);

        Btn_6 = new QPushButton(gridLayoutWidget);
        Btn_6->setObjectName(QString::fromUtf8("Btn_6"));
        sizePolicy1.setHeightForWidth(Btn_6->sizePolicy().hasHeightForWidth());
        Btn_6->setSizePolicy(sizePolicy1);
        Btn_6->setMinimumSize(QSize(80, 60));
        Btn_6->setBaseSize(QSize(0, 0));
        Btn_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_6, 1, 3, 1, 1);

        Btn_7 = new QPushButton(gridLayoutWidget);
        Btn_7->setObjectName(QString::fromUtf8("Btn_7"));
        sizePolicy1.setHeightForWidth(Btn_7->sizePolicy().hasHeightForWidth());
        Btn_7->setSizePolicy(sizePolicy1);
        Btn_7->setMinimumSize(QSize(80, 60));
        Btn_7->setBaseSize(QSize(0, 0));
        Btn_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_7, 2, 1, 1, 1);

        Btn_0 = new QPushButton(gridLayoutWidget);
        Btn_0->setObjectName(QString::fromUtf8("Btn_0"));
        sizePolicy1.setHeightForWidth(Btn_0->sizePolicy().hasHeightForWidth());
        Btn_0->setSizePolicy(sizePolicy1);
        Btn_0->setMinimumSize(QSize(80, 60));
        Btn_0->setBaseSize(QSize(0, 0));
        Btn_0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Btn_0, 3, 2, 1, 1);

        Btn_STOP = new QPushButton(gridLayoutWidget);
        Btn_STOP->setObjectName(QString::fromUtf8("Btn_STOP"));
        sizePolicy1.setHeightForWidth(Btn_STOP->sizePolicy().hasHeightForWidth());
        Btn_STOP->setSizePolicy(sizePolicy1);
        Btn_STOP->setMinimumSize(QSize(80, 60));
        Btn_STOP->setBaseSize(QSize(40, 40));
        Btn_STOP->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 0, 0);"));

        gridLayout->addWidget(Btn_STOP, 3, 1, 1, 1);

        Btn_OK = new QPushButton(gridLayoutWidget);
        Btn_OK->setObjectName(QString::fromUtf8("Btn_OK"));
        sizePolicy1.setHeightForWidth(Btn_OK->sizePolicy().hasHeightForWidth());
        Btn_OK->setSizePolicy(sizePolicy1);
        Btn_OK->setMinimumSize(QSize(80, 60));
        Btn_OK->setBaseSize(QSize(0, 0));
        Btn_OK->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(52, 225, 13);"));

        gridLayout->addWidget(Btn_OK, 3, 3, 1, 1);

        Label_Error = new QLabel(LoginPage);
        Label_Error->setObjectName(QString::fromUtf8("Label_Error"));
        Label_Error->setGeometry(QRect(70, 340, 381, 51));
        Label_Error->setStyleSheet(QString::fromUtf8(""));
        Label_Error->setAlignment(Qt::AlignCenter);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "KIRJAUDU SIS\303\204\303\204N", nullptr));
        label_3->setText(QCoreApplication::translate("LoginPage", "KORTIN ID", nullptr));
        Btn_Login->setText(QCoreApplication::translate("LoginPage", "KIRJAUDU", nullptr));
        Label_CardInput->setText(QString());
        Label_PinInput->setText(QString());
        label_2->setText(QCoreApplication::translate("LoginPage", "TUNNUSLUKU", nullptr));
        Btn_8->setText(QCoreApplication::translate("LoginPage", "8", nullptr));
        Btn_5->setText(QCoreApplication::translate("LoginPage", "5", nullptr));
        Btn_9->setText(QCoreApplication::translate("LoginPage", "9", nullptr));
        Btn_4->setText(QCoreApplication::translate("LoginPage", "4", nullptr));
        Btn_2->setText(QCoreApplication::translate("LoginPage", "2", nullptr));
        Btn_1->setText(QCoreApplication::translate("LoginPage", "1", nullptr));
        Btn_3->setText(QCoreApplication::translate("LoginPage", "3", nullptr));
        Btn_6->setText(QCoreApplication::translate("LoginPage", "6", nullptr));
        Btn_7->setText(QCoreApplication::translate("LoginPage", "7", nullptr));
        Btn_0->setText(QCoreApplication::translate("LoginPage", "0", nullptr));
        Btn_STOP->setText(QCoreApplication::translate("LoginPage", "STOP", nullptr));
        Btn_OK->setText(QCoreApplication::translate("LoginPage", "OK", nullptr));
        Label_Error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
