#include "network.h"

Network::Network()
{
    manager = new QNetworkAccessManager(this);
    apikey = "";
}

Network::~Network()
{
    delete manager;
    manager = nullptr;
}

void Network::authenticationSlot(QNetworkReply *, QAuthenticator *authenticator)
{
    // Kirjautumistiedot Basic Authenticationia vartsen

    //qDebug() << "Authentication Required";
    authenticator->setUser("bank_maatti");
    authenticator->setPassword("9201");
}

QString Network::makeRequest(QUrl &url, QUrlQuery &query)
{
    // Networkrequestiin tallennetaan Urlin tiedot ja headerin tyyppi

    QNetworkRequest request;
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    // Tallennetaan reply-muuttujaan managerin tekemän nettipyynnön vastaus (pyyntö tehdään PUT-metodilla)

    QNetworkReply *reply = manager->put(request, query.query().toUtf8());

    // Nettipyynntöä suoritetaan omassa loopissaan, jotta ohjelma voi ottaa vastaan muita eventtejä ja silti
    // palauttaa serverin vastaus samassa funktiossa. Yhdistetään manager-olio autentikointi-slottiin sekä
    // loopin lopetus-slottiin kun serverin vastaus on tullut.

    QEventLoop loop;
    loop.connect(manager, SIGNAL(authenticationRequired(QNetworkReply*,QAuthenticator*)), this, SLOT(authenticationSlot(QNetworkReply*,QAuthenticator*)));
    loop.connect(manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QString answer;

    // Jos jokin virhe sattui, sitä ei eritellä vaan vastauksena on aina "Connection Error"

    if (reply->error())
    {
        //qDebug() << reply->readAll();
        answer = QString("{ \"status\": false, \"message\": \"Connection Error\"}");
    }
    else answer = reply->readAll();

    // Tuhotaan reply-olio myöhemmin

    reply->deleteLater();

    //qDebug() << answer;     // Vastauksen tulostaminen konsoliin debuggausta varten (poistetaan lopullisesta versiosta)

    // RestApin vastaus on JSON-dokumentti, joka palautetaan QString-muodossa käsittelyä varten

    return answer;
}

    // Funktiot nettipyyntöjen tekemiseen RestApin tuntemille funktioille. Pyynnöt toistavat samaa kaavaa ja funktiot
    // palauttavat tuloksena QVariantMap-olion, josta tarvittavat tiedot saadaan ulos pääohjelman käytettäväksi
    //
    // Jos pyyntö epäonnistuu, palauttaa RestApi tiedot:
    // "status" => false
    // "message" => string (virheen tiedot)

QVariantMap Network::loginCard(const QString &card_number, const QString &card_pin)
{
    // Serverin sekä halutun funktion osoite

    QUrl url(base_url + "LoginCard/login");// + "LoginCard/login");


    // Parametrit mitkä lähetetään PUT-metodilla serverille

    QUrlQuery params;
    params.addQueryItem("card_number", card_number);
    params.addQueryItem("card_pin", card_pin);

    // Serverin vastauksen parsiminen JSON-muodosta QVariantMapiksi

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    LoginCard funktio palauttaa arvot
    {
        "status": true/false,
        "key": string,
        "result": {
            "card_id": unsigned int,
            "type": undigned int
        }
    }
    */

    return c;
}

QVariantMap Network::logoutCard()
{    
    QUrl url(base_url + "LoginCard/logout");

    QUrlQuery params;
    params.addQueryItem("key", apikey);

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    LogoutCard funktio palauttaa arvot:
    {
        "status": true,
        "message": "Logged Out"
    }
    */

    return c;
}

QVariantMap Network::getBalance(quint8 account_type)
{
    QUrl url(base_url + "CardApp/get_balance");

    QUrlQuery params;
    params.addQueryItem("key", apikey);
    params.addQueryItem("account_type", QString::number(account_type));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    getBalance funktio palauttaa arvot:
    {
        "status": true/false,
        "balance": int
    }
    */

    return c;
}

QVariantMap Network::getTransacts(quint8 account_type)
{
    QUrl url(base_url + "CardApp/get_transacts");

    QUrlQuery params;
    params.addQueryItem("key", apikey);
    params.addQueryItem("account_type", QString::number(account_type));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    getTransacts funktio palauttaa arvot:
    {
        "status": true/false,
        "transacts": [
            {
                "time": TIMESTAMP,
                "amount": int,
                "account_type": undigned int
            },
            ...
        ]
    }
    */

    return c;
}

QVariantMap Network::withdrawMoney(qint32 amount, quint8 account_type)
{
    QUrl url(base_url + "CardApp/withdraw");

    QUrlQuery params;
    params.addQueryItem("key", apikey);
    params.addQueryItem("account_type", QString::number(account_type));
    params.addQueryItem("amount", QString::number(amount));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    withdrawMoney funktio palauttaa arvot:
    {
        "status": true/false,
        "message": "Withdraw Succesful"
    }
    */

    return c;
}

QVariantMap Network::payCredit(qint32 amount)
{
    QUrl url(base_url + "CardApp/pay_credit");

    QUrlQuery params;
    params.addQueryItem("key", apikey);
    params.addQueryItem("amount", QString::number(amount));

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    payCredit funktio palauttaa arvot:
    {
        "status": true/false,
        "message": "Credit Loan Paid Succesfully"
    }
    */
    return c;
}

QVariantMap Network::getInfo()
{
    QUrl url(base_url + "CardApp/get_info");

    QUrlQuery params;
    params.addQueryItem("key", apikey);

    QJsonDocument a = QJsonDocument::fromJson(makeRequest(url, params).toUtf8());
    QJsonObject b = a.object();
    QVariantMap c = b.toVariantMap();

    /*
    getInfo funktio palauttaa arvot:
    {
        "status": true/false,
        "account_info": [
            {
                "number": unsigned int,
                "credit_limit": unsigned int,
                "first_name": string,
                "last_name": string
            }
         ],
        "card_info": [
            {
                "first_name": string,
                "last_name": string,
                "number": unsigned int,
                "type": unsigned int
            }
         ]
    }
    */

    return c;
}
