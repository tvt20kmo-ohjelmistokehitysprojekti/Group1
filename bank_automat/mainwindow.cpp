#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    card_string = "Syötä kortti";
    card_number = 0;
    card_pin = 0;
    no_string = true;

    connect(ui->Btn_0, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_1, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_2, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_3, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_4, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_5, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_6, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_7, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_8, SIGNAL(pressed()), this, SLOT(digitClick()));
    connect(ui->Btn_9, SIGNAL(pressed()), this, SLOT(digitClick()));

    connect(ui->Btn_STOP, SIGNAL(pressed()), this, SLOT(stopClick()));

    ui->LabelCardInput->setText(card_string);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitClick()
{
    if (card_string.size() == MAX_CARD_SIZE) return;

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString digit = clickedButton->text();

    if (no_string)
    {
        ui->LabelCardInput->setStyleSheet("background-color: white; color: black;");
        card_string = "";
        no_string = false;
    }

    card_string += digit;
    ui->LabelCardInput->setText(card_string);
}

void MainWindow::stopClick()
{
    ui->LabelCardInput->setStyleSheet("background-color: white; color: gray;");
    card_string = "Syötä kortti";
    no_string = true;

    ui->LabelCardInput->setText(card_string);
}
