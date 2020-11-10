#include "network.h"

Network::Network()
{
    //
}

Network::~Network()
{

}

void Network::cardLogin(const QString &card_number, const QString &card_pin)
{
    QNetworkRequest request;
    request.setUrl(QUrl("http://localhost/CardApp/login"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrlQuery params;
    params.addQueryItem("secret", "dappadaa");
    params.addQueryItem("cardnumber", card_number);
    params.addQueryItem("cardpin", card_pin);

    manager = new QNetworkAccessManager();
    QString answer = "";

    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply *reply)
                    {
                        if (reply->error())
                        {
                            qDebug() << reply->errorString();
                            reply->deleteLater();
                            manager->deleteLater();
                            emit setRespose("Connection Error");
                            return;
                        }
                        QString answer = reply->readAll();
                        reply->deleteLater();
                        manager->deleteLater();
                        emit setRespose(answer);
                    }

            );
    manager->post(request, params.query().toUtf8());
}
