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
#include "withdrawpage.h"
#include "transactpage.h"
#include "paycreditpage.h"

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
    void changePage(qint32 page);               // Sivunvaihto pääikkunan StackedWidgetille
    void storeData(const QVariantMap &_data);   // Kirjautuessa lähetetyn datan tallennus
    void logOut();                              // Ohjelman lopetus

private:
    Ui::MainWindow *ui;         // Pääikkunan formi
    Network        *connector;  // Olio ohjelman keskustelulle RestApin kanssa
    QVariantMap    data;        // Kirjautumistiedot tallennetaan tähän muuttujaan (Apikey, Kortin ID, Kortin Tyyppi, Käyttäjä ID, Etu- ja Sukunumi)
};
#endif // MAINWINDOW_H
