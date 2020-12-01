#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QDebug>

#include <QVariantMap>
#include <QVariant>
=======
#include <QPixmap>


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

    void on_label_4_linkActivated(const QString &link);

    void on_Btn_login_clicked();

    void on_btn_NOSTO_clicked();

    void on_btn_back_nosto_clicked();

    void on_btn_back_tapaht_clicked();

    void on_btn_back_saldo_clicked();

    void on_btn_back_creditP_clicked();

    void on_btn_back_toiminto_clicked();


private:
    Ui::MainWindow *ui;         // Pääikkunan formi
    Network        *connector;  // Olio ohjelman keskustelulle RestApin kanssa
    QVariantMap    data;        // Kirjautumistiedot tallennetaan tähän muuttujaan (Apikey, Kortin ID, Kortin Tyyppi, Käyttäjä ID, Etu- ja Sukunumi)
};
#endif // MAINWINDOW_H
