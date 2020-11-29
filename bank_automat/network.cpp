#include "network.h"

Network::Network()
{
    manager = new QNetworkAccessManager(this);
}

Network::~Network()
{
    delete manager;
    manager = nullptr;
}

void Network::authenticationSlot(QNetworkReply *, QAuthenticator *authenticator)
{
    authenticator->setUser("tähän käyttäjä");
    authenticator->setPassword("tähän salasana");
}

QString Network::makeRequest(QUrl &url, QUrlQuery &query)
{
    QNetworkRequest request;
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QNetworkReply *reply = manager->put(request, query.query().toUtf8());

    QEventLoop loop;
    loop.connect(manager, SIGNAL(authenticationRequired(QNetworkReply*,QAuthenticator*)), this, SLOT(authenticationSlot(QNetworkReply*,QAuthenticator*)));
    loop.connect(manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QString answer;

    if (reply->error())
    {
        answer = QString("{ \"status\": false, \"message\": \"Connection Error\"}");
    }
    else answer = reply->readAll();

    reply->deleteLater();

    qDebug() << answer;
    return answer;
}

QVariantMap Network::loginCard(const QString &card_number, const QString &card_pin)
{
    QUrl url(base_url + "LoginCard/login");

    QUrlQuery params;
    params.addQueryItem("card_number", card_number);
    params.addQueryItem("card_pin", card_pin);

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    return c;
}

QVariantMap Network::logoutCard(const QString &key)
{
    QUrl url(base_url + "LoginCard/logout");

    QUrlQuery params;
    params.addQueryItem("key", key);

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    return c;
}

QVariantMap Network::getBalance(const QString &key, quint8 account_type)
{
    QUrl url(base_url + "CardApp/get_balance");

    QUrlQuery params;
    params.addQueryItem("key", key);
    params.addQueryItem("account_type", QString::number(account_type));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    return c;
}

QVariantMap Network::getTransacts(const QString &key, quint8 account_type)
{
    QUrl url(base_url + "CardApp/get_transacts");

    QUrlQuery params;
    params.addQueryItem("key", key);
    params.addQueryItem("account_type", QString::number(account_type));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    return c;
}

QVariantMap Network::withdrawMoney(const QString &key, quint32 amount, quint8 account_type)
{
    QUrl url(base_url + "CardApp/get_transacts");

    QUrlQuery params;
    params.addQueryItem("key", key);
    params.addQueryItem("account_type", QString::number(account_type));
    params.addQueryItem("amount", QString::number(amount));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    return c;
}

QVariantMap Network::payCredit(const QString &key, quint32 amount)
{
    QUrl url(base_url + "CardApp/withdraw");

    QUrlQuery params;
    params.addQueryItem("key", key);
    params.addQueryItem("amount", QString::number(amount));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    return c;
}
