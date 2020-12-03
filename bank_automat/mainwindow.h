#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QDebug>
#include <QVariantMap>
#include <QVariant>
#include <QCloseEvent>

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
    void changePage(Page page);                 // Sivunvaihto pääikkunan StackedWidgetille
    void storeData(const QVariantMap &_data);   // Kirjautuessa lähetetyn datan tallennus
    void logOut();                              // Ohjelman lopetus

private:
    virtual void closeEvent(QCloseEvent *event);
    void fastLogin(Page page, const QString &card_number, const QString &card_pin);  // Funktio nopeaan loggaamiseen sivulle debug-vaiheessa

    Ui::MainWindow *ui;                         // Pääikkunan formi
    Network        *connector;                  // Olio ohjelman keskustelulle RestApin kanssa
    QVariantMap    data;                        // Kirjautumistiedot tallennetaan tähän muuttujaan
                                                // (Apikey, Kortin ID, Kortin Tyyppi, Käyttäjä ID, Etu- ja Sukunumi)
};
#endif // MAINWINDOW_H
