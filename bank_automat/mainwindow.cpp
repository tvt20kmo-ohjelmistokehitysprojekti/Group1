#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    card_number = "";
    card_pin = "";
    resetInput("", INPUT_NONE, CARD_NUMBER_SIZE);
    ui->stackedWidget->setCurrentIndex(0);

    ui->LabelCardInput->installEventFilter(this);
    ui->LabelPinInput->installEventFilter(this);

    initMainButtons(); 
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::initMainButtons()
{
    QList<QPushButton*> temp_list = this->findChildren<QPushButton*>(QRegularExpression("Btn_\\d"));
    for(auto &i: temp_list)
    {
        connect(i, SIGNAL(pressed()), this, SLOT(digitClick()));
    }

    connect(ui->Btn_STOP, SIGNAL(pressed()), this, SLOT(stopClick()));
    connect(ui->Btn_OK, SIGNAL(pressed()), this, SLOT(okClick()));
    connect(ui->Btn_login, SIGNAL(pressed()), this, SLOT(loginClick()));

    connect(&connector, &Network::setRespose, this, &MainWindow::netWorkRequest);
}

bool MainWindow::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusIn)
    {
        if (object == ui->LabelCardInput && input_type != INPUT_CARD_NUMBER)
        {
            resetInput(card_number, INPUT_CARD_NUMBER, CARD_NUMBER_SIZE);
        }
        if (object == ui->LabelPinInput && input_type != INPUT_PIN_CODE)
        {
            resetInput(card_pin, INPUT_PIN_CODE, PIN_NUMBER_SIZE);
        }
    }
    return false;
}

void MainWindow::digitClick()
{
    if (input_string.size() == string_size)
    {
        input_type = INPUT_NONE;
        return;
    }

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString digit = clickedButton->text();

    input_string += digit;

    switch(input_type)
    {
        case INPUT_CARD_NUMBER:
            ui->LabelCardInput->setFocus();
            ui->LabelCardInput->setText(input_string);
            break;
        case INPUT_PIN_CODE:
            ui->LabelPinInput->setFocus();
            ui->LabelPinInput->setText(input_string);
            break;
    }
}

void MainWindow::resetInput(const QString &text, quint8 _type, quint32 _size)
{
    input_string = text;
    input_type = _type;
    string_size = _size;
}

void MainWindow::stopClick()
{
    card_number = "";
    card_pin = "";
    ui->LabelCardInput->setText("");
    ui->LabelPinInput->setText("");
    resetInput(card_number, INPUT_NONE, CARD_NUMBER_SIZE);
}

void MainWindow::okClick()
{
    switch(input_type)
    {
        case INPUT_CARD_NUMBER:
            ui->Btn_login->setFocus();
            resetInput(card_pin, INPUT_NONE, PIN_NUMBER_SIZE);
            break;

        case INPUT_PIN_CODE:
            ui->Btn_login->setFocus();
            resetInput(card_number, INPUT_NONE, CARD_NUMBER_SIZE);
            break;
    }
}

void MainWindow::loginClick()
{
    card_number = ui->LabelCardInput->text();
    card_pin = ui->LabelPinInput->text();

    connector.cardLogin(card_number, card_pin);
}

void MainWindow::netWorkRequest(QString request)
{
    ui->Label_error->setStyleSheet("color: red;");
    ui->Label_error->setText(request);
}

void MainWindow::on_label_4_linkActivated(const QString &link)
{

}

void MainWindow::on_btn_TAKAISIN_clicked()
{

}
