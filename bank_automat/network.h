#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QAuthenticator>
#include <QJsonObject>
#include <QJsonDocument>
#include <QVariantMap>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QDebug>
#include <QCoreApplication>

class Network : public QObject
{
    Q_OBJECT
public:
    Network();
    ~Network();

    void storeApiKey(const QString &key) {apikey = key;}                        // Apikeyn tallennus

    QVariantMap loginCard(const QString &card_number, const QString &card_pin); // Sisäänkirjautuminen kortin tiedoilla
    QVariantMap logoutCard();                                                   // Uloskirjautuminen lopetettaessa
    QVariantMap getBalance(quint8 account_type);                                // Saldotietojen hakeminen
    QVariantMap getTransacts(quint8 account_type);                              // Kortin tapahtumien hakeminen
    QVariantMap payCredit(quint32 amount);                                      // Creditin velan maksaminen debit-tililtä
    QVariantMap withdrawMoney(quint32 amount, quint8 account_type);             // Rahan nostaminen tililtä


private slots:
    void authenticationSlot(QNetworkReply *, QAuthenticator *authenticator);    // Slotti todentamista varten

private:
    QString makeRequest(QUrl &url, QUrlQuery &query);                           // Funktio hakujen tekemiseen RestApille
    const QString base_url = "http://localhost/RestApi/api/";                   // RestApin osoite

    QNetworkAccessManager *manager;                                             // Olio nettiyhteyden hallintaan
    QString                apikey;                                              // Apikey RestApia varten
};

#endif // NETWORK_H
