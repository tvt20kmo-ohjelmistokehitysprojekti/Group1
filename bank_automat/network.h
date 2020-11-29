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

    QVariantMap loginCard(const QString &card_number, const QString &card_pin);
    QVariantMap logoutCard(const QString &key);
    QVariantMap getBalance(const QString &key, quint8 account_type);
    QVariantMap getTransacts(const QString &key, quint8 account_type);
    QVariantMap payCredit(const QString &key, quint32 amount);
    QVariantMap withdrawMoney(const QString &key, quint32 amount, quint8 account_type);


private slots:
    void authenticationSlot(QNetworkReply *, QAuthenticator *authenticator);

private:
    QString makeRequest(QUrl &url, QUrlQuery &query);
    const QString base_url = "tähän alkuosoite";

    QNetworkAccessManager *manager;
};

#endif // NETWORK_H
