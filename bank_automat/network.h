#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QDebug>

class Network : public QObject
{
    Q_OBJECT
public:
    Network();
    ~Network();

    void cardLogin(const QString &card_number, const QString &card_pin);

signals:
    void setRespose(QString response);

private:
    QNetworkAccessManager *manager;
};

#endif // NETWORK_H
