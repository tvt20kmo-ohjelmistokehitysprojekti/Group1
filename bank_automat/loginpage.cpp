#include "loginpage.h"
#include "ui_loginpage.h"

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    card_number = "";
    card_pin = "";
    resetInput("", INPUT_NONE, CARD_NUMBER_SIZE);

    ui->Label_CardInput->installEventFilter(this);
    ui->Label_PinInput->installEventFilter(this);

    ui->Label_Error->setVisible(false);
    timer.setSingleShot(true);
    connect(&timer, &QTimer::timeout, this, &LoginPage::hideError);

    initButtons();
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::hideError()
{
    ui->Label_Error->setVisible(false);
}

void LoginPage::initButtons()
{
    QList<QPushButton*> temp_list = this->findChildren<QPushButton*>(QRegularExpression("Btn_\\d"));
    for(auto &i: temp_list)
    {
        connect(i, &QPushButton::pressed, this, [=]() {digitClick(i->text());});
    }

    connect(ui->Btn_STOP, SIGNAL(pressed()), this, SLOT(stopClick()));
    connect(ui->Btn_OK, SIGNAL(pressed()), this, SLOT(okClick()));
    connect(ui->Btn_Login, SIGNAL(pressed()), this, SLOT(loginClick()));
}

bool LoginPage::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusIn)
    {
        if (object == ui->Label_CardInput && input_type != INPUT_CARD_NUMBER)
        {
            resetInput(card_number, INPUT_CARD_NUMBER, CARD_NUMBER_SIZE);
        }
        if (object == ui->Label_PinInput && input_type != INPUT_PIN_CODE)
        {
            resetInput(card_pin, INPUT_PIN_CODE, PIN_NUMBER_SIZE);
        }
    }
    return false;
}

void LoginPage::digitClick(QString digit)
{
    if (input_string.size() == string_size)
    {
        input_type = INPUT_NONE;
        return;
    }

    if (!fresh_input)
    {
        resetInput("", input_type, string_size);
        fresh_input = false;
    }

    input_string += digit;

    switch(input_type)
    {
        case INPUT_CARD_NUMBER:
            ui->Label_CardInput->setFocus();
            ui->Label_CardInput->setText(input_string);
            break;
        case INPUT_PIN_CODE:
            ui->Label_PinInput->setFocus();
            ui->Label_PinInput->setText(input_string);
            break;
    }
}

void LoginPage::resetInput(const QString &text, quint8 _type, quint32 _size)
{
    input_string = text;
    input_type = _type;
    string_size = _size;
    fresh_input = true;
}

void LoginPage::stopClick()
{
    card_number = "";
    card_pin = "";
    ui->Label_CardInput->setText("");
    ui->Label_PinInput->setText("");
    resetInput(card_number, INPUT_NONE, CARD_NUMBER_SIZE);
}

void LoginPage::okClick()
{
    switch(input_type)
    {
        case INPUT_CARD_NUMBER:
            ui->Btn_Login->setFocus();
            resetInput(card_pin, INPUT_NONE, PIN_NUMBER_SIZE);
            break;

        case INPUT_PIN_CODE:
            ui->Btn_Login->setFocus();
            resetInput(card_number, INPUT_NONE, CARD_NUMBER_SIZE);
            break;
    }
}

void LoginPage::loginClick()
{
    QVariantMap data = connector->loginCard(ui->Label_CardInput->text(), ui->Label_PinInput->text());

    if (data["status"].toBool() == false)
    {
        ui->Label_Error->setStyleSheet("color: red");
        ui->Label_Error->setText(data["message"].toString());
        ui->Label_Error->setVisible(true);
        timer.start(2000);
    }
    else
    {
        emit sendData(data);
        emit changePage(Page::menuPage);
    }
}
