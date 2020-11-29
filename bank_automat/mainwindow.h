#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>
#include <QVariant>

#include "settings.h"
#include "network.h"
#include "loginpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void changePage(qint32 page);
    void storeData(const QVariantMap &_data);
    void logOut();

private:
    Ui::MainWindow *ui;
    Network        connector;
    LoginPage      *log;
    QVariantMap    data;
};
#endif // MAINWINDOW_H
