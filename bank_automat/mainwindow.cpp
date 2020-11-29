#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->loginPage->setNetwork(&connector);
    ui->saldoPage->setNetwork(&connector);

    connect(ui->loginPage, &LoginPage::changePage, this, &MainWindow::changePage);
    connect(ui->loginPage, &LoginPage::sendData, this, &MainWindow::storeData);

    connect(ui->menuPage, &MenuPage::changePage, this, &MainWindow::changePage);
    connect(ui->menuPage, &MenuPage::logOut, this, &MainWindow::logOut);

    connect(ui->saldoPage, &SaldoPage::changePage, this, &MainWindow::changePage);

    changePage(Page::loginPage);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::changePage(qint32 page)
{
    ui->stackedWidget->setCurrentIndex(page);
}

void MainWindow::storeData(const QVariantMap &_data)
{
    data = _data;
    QVariantMap result = data["result"].toMap();

    ui->saldoPage->setCardInfo(data["key"].toString(), result["type"].toUInt());
}

void MainWindow::logOut()
{
    connector.logoutCard(data["key"].toString());
    this->close();
}
