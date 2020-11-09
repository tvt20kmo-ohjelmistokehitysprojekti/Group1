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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *LabelCardInput;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QPushButton *Btn_8;
    QPushButton *Btn_OK;
    QPushButton *Btn_9;
    QPushButton *Btn_6;
    QPushButton *Btn_2;
    QPushButton *Btn_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *Btn_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Btn_0;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Btn_STOP;
    QPushButton *Btn_1;
    QPushButton *Btn_4;
    QPushButton *Btn_7;
    QWidget *page_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(926, 691);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        LabelCardInput = new QLabel(page);
        LabelCardInput->setObjectName(QString::fromUtf8("LabelCardInput"));
        LabelCardInput->setMinimumSize(QSize(280, 60));
        LabelCardInput->setMaximumSize(QSize(280, 60));
        LabelCardInput->setBaseSize(QSize(280, 60));
        QFont font;
        font.setPointSize(20);
        LabelCardInput->setFont(font);
        LabelCardInput->setStyleSheet(QString::fromUtf8("background-color : white; \n"
"color : gray;"));
        LabelCardInput->setFrameShape(QFrame::StyledPanel);
        LabelCardInput->setFrameShadow(QFrame::Sunken);
        LabelCardInput->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LabelCardInput, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 6);

        Btn_8 = new QPushButton(page);
        Btn_8->setObjectName(QString::fromUtf8("Btn_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Btn_8->sizePolicy().hasHeightForWidth());
        Btn_8->setSizePolicy(sizePolicy1);
        Btn_8->setMinimumSize(QSize(80, 60));
        Btn_8->setBaseSize(QSize(0, 0));
        Btn_8->setFont(font);

        gridLayout->addWidget(Btn_8, 3, 3, 1, 1);

        Btn_OK = new QPushButton(page);
        Btn_OK->setObjectName(QString::fromUtf8("Btn_OK"));
        sizePolicy1.setHeightForWidth(Btn_OK->sizePolicy().hasHeightForWidth());
        Btn_OK->setSizePolicy(sizePolicy1);
        Btn_OK->setMinimumSize(QSize(80, 60));
        Btn_OK->setBaseSize(QSize(0, 0));
        Btn_OK->setFont(font);
        Btn_OK->setStyleSheet(QString::fromUtf8("background-color : green; \n"
"color : black; "));

        gridLayout->addWidget(Btn_OK, 4, 4, 1, 1);

        Btn_9 = new QPushButton(page);
        Btn_9->setObjectName(QString::fromUtf8("Btn_9"));
        sizePolicy1.setHeightForWidth(Btn_9->sizePolicy().hasHeightForWidth());
        Btn_9->setSizePolicy(sizePolicy1);
        Btn_9->setMinimumSize(QSize(80, 60));
        Btn_9->setBaseSize(QSize(0, 0));
        Btn_9->setFont(font);

        gridLayout->addWidget(Btn_9, 3, 4, 1, 1);

        Btn_6 = new QPushButton(page);
        Btn_6->setObjectName(QString::fromUtf8("Btn_6"));
        sizePolicy1.setHeightForWidth(Btn_6->sizePolicy().hasHeightForWidth());
        Btn_6->setSizePolicy(sizePolicy1);
        Btn_6->setMinimumSize(QSize(80, 60));
        Btn_6->setBaseSize(QSize(0, 0));
        Btn_6->setFont(font);

        gridLayout->addWidget(Btn_6, 2, 4, 1, 1);

        Btn_2 = new QPushButton(page);
        Btn_2->setObjectName(QString::fromUtf8("Btn_2"));
        sizePolicy1.setHeightForWidth(Btn_2->sizePolicy().hasHeightForWidth());
        Btn_2->setSizePolicy(sizePolicy1);
        Btn_2->setMinimumSize(QSize(80, 60));
        Btn_2->setBaseSize(QSize(0, 0));
        Btn_2->setFont(font);

        gridLayout->addWidget(Btn_2, 1, 3, 1, 1);

        Btn_3 = new QPushButton(page);
        Btn_3->setObjectName(QString::fromUtf8("Btn_3"));
        sizePolicy1.setHeightForWidth(Btn_3->sizePolicy().hasHeightForWidth());
        Btn_3->setSizePolicy(sizePolicy1);
        Btn_3->setMinimumSize(QSize(80, 60));
        Btn_3->setBaseSize(QSize(0, 0));
        Btn_3->setFont(font);

        gridLayout->addWidget(Btn_3, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(307, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 5, 1, 1);

        Btn_5 = new QPushButton(page);
        Btn_5->setObjectName(QString::fromUtf8("Btn_5"));
        sizePolicy1.setHeightForWidth(Btn_5->sizePolicy().hasHeightForWidth());
        Btn_5->setSizePolicy(sizePolicy1);
        Btn_5->setMinimumSize(QSize(80, 60));
        Btn_5->setBaseSize(QSize(0, 0));
        Btn_5->setFont(font);

        gridLayout->addWidget(Btn_5, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(307, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        Btn_0 = new QPushButton(page);
        Btn_0->setObjectName(QString::fromUtf8("Btn_0"));
        sizePolicy1.setHeightForWidth(Btn_0->sizePolicy().hasHeightForWidth());
        Btn_0->setSizePolicy(sizePolicy1);
        Btn_0->setMinimumSize(QSize(80, 60));
        Btn_0->setBaseSize(QSize(0, 0));
        Btn_0->setFont(font);

        gridLayout->addWidget(Btn_0, 4, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 179, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 3, 1, 1);

        Btn_STOP = new QPushButton(page);
        Btn_STOP->setObjectName(QString::fromUtf8("Btn_STOP"));
        sizePolicy1.setHeightForWidth(Btn_STOP->sizePolicy().hasHeightForWidth());
        Btn_STOP->setSizePolicy(sizePolicy1);
        Btn_STOP->setMinimumSize(QSize(80, 60));
        Btn_STOP->setBaseSize(QSize(40, 40));
        Btn_STOP->setFont(font);
        Btn_STOP->setStyleSheet(QString::fromUtf8("background-color : red; \n"
"color : black; "));

        gridLayout->addWidget(Btn_STOP, 4, 2, 1, 1);

        Btn_1 = new QPushButton(page);
        Btn_1->setObjectName(QString::fromUtf8("Btn_1"));
        sizePolicy1.setHeightForWidth(Btn_1->sizePolicy().hasHeightForWidth());
        Btn_1->setSizePolicy(sizePolicy1);
        Btn_1->setMinimumSize(QSize(80, 60));
        Btn_1->setBaseSize(QSize(0, 0));
        Btn_1->setFont(font);

        gridLayout->addWidget(Btn_1, 1, 2, 1, 1);

        Btn_4 = new QPushButton(page);
        Btn_4->setObjectName(QString::fromUtf8("Btn_4"));
        sizePolicy1.setHeightForWidth(Btn_4->sizePolicy().hasHeightForWidth());
        Btn_4->setSizePolicy(sizePolicy1);
        Btn_4->setMinimumSize(QSize(80, 60));
        Btn_4->setBaseSize(QSize(0, 0));
        Btn_4->setFont(font);

        gridLayout->addWidget(Btn_4, 2, 2, 1, 1);

        Btn_7 = new QPushButton(page);
        Btn_7->setObjectName(QString::fromUtf8("Btn_7"));
        sizePolicy1.setHeightForWidth(Btn_7->sizePolicy().hasHeightForWidth());
        Btn_7->setSizePolicy(sizePolicy1);
        Btn_7->setMinimumSize(QSize(80, 60));
        Btn_7->setBaseSize(QSize(0, 0));
        Btn_7->setFont(font);

        gridLayout->addWidget(Btn_7, 3, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Application", nullptr));
        LabelCardInput->setText(QCoreApplication::translate("MainWindow", "Sy\303\266t\303\244 kortti", nullptr));
        Btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Btn_OK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        Btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Btn_STOP->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        Btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
