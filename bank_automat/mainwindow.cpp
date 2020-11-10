#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    input_string = "Syötä kortti";
    card_number = 0;
    card_pin = 0;
    input_begin = true;
    input_type = INPUT_CARD_NUMBER;
    string_size = CARD_NUMBER_SIZE;

    ui->LabelCardInput->setText(input_string);

    initMainButtons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainButtons()
{
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
    connect(ui->Btn_OK, SIGNAL(pressed()), this, SLOT(okClick()));
}

void MainWindow::digitClick()
{
    if (input_string.size() == string_size) return;

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString digit = clickedButton->text();

    if (input_begin)
    {
        ui->LabelCardInput->setStyleSheet("background-color: white; color: black;");
        input_string = "";
        input_begin = false;
    }

    input_string += digit;
    ui->LabelCardInput->setText(input_string);
}

void MainWindow::stopClick()
{
    ui->LabelCardInput->setStyleSheet("background-color: white; color: gray;");
    input_string = "Syötä kortti";
    input_type = INPUT_CARD_NUMBER;
    string_size = CARD_NUMBER_SIZE;
    input_begin = true;

    ui->LabelCardInput->setText(input_string);
}

void MainWindow::okClick()
{
    switch(input_type)
    {
        case INPUT_CARD_NUMBER:
            card_number = input_string.toUInt();

            ui->LabelCardInput->setStyleSheet("background-color: white; color: gray;");
            input_string = "Syötä pin";
            input_type = INPUT_PIN_CODE;
            string_size = PIN_NUMBER_SIZE;
            input_begin = true;

            ui->LabelCardInput->setText(input_string);
            break;

        case INPUT_PIN_CODE:
            card_pin = input_string.toUInt();

            //
            break;
    }
}
