#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    card_number = "";
    card_pin = "";
    resetInput("Syötä Kortti", INPUT_CARD_NUMBER, CARD_NUMBER_SIZE);

    initMainButtons(); 
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
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

    connect(&connector, &Network::setRespose, this, &MainWindow::netWorkRequest);
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

void MainWindow::resetInput(const QString &text, quint8 _type, quint32 _size)
{
    ui->LabelCardInput->setStyleSheet("background-color: white; color: gray;");
    input_type = _type;
    string_size = _size;
    input_begin = true;

    ui->LabelCardInput->setText(text);
}

void MainWindow::stopClick()
{
    resetInput("Syötä Kortti", INPUT_CARD_NUMBER, CARD_NUMBER_SIZE);
}

void MainWindow::okClick()
{
    switch(input_type)
    {
        case INPUT_CARD_NUMBER:
            card_number = input_string;
            resetInput("Syötä Pin", INPUT_PIN_CODE, PIN_NUMBER_SIZE);
            break;

        case INPUT_PIN_CODE:
            card_pin = input_string;
            connector.cardLogin(card_number, card_pin);
            resetInput("Syötä Kortti", INPUT_CARD_NUMBER, CARD_NUMBER_SIZE);
            break;
    }
}

void MainWindow::netWorkRequest(QString request)
{
    ui->LabelNetWork->setStyleSheet("color: red;");
    ui->LabelNetWork->setText(request);
}
