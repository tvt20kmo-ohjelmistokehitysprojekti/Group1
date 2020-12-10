#ifndef INFOPAGE_H
#define INFOPAGE_H

#include <QWidget>

#include "settings.h"
#include "network.h"

namespace Ui {
class InfoPage;
}

class InfoPage : public QWidget
{
    Q_OBJECT

public:
    explicit InfoPage(QWidget *parent = nullptr);
    ~InfoPage();
    void setNetwork(Network *_connector) {connector = _connector;}  // Network-olion ositteen tallennus
    void setInfo();                                                 // Infosivujen tietojen päivitys tietokannasta

signals:
    void changePage(Page page);                                     // Sivunvaihtosignaali pääikkunalle

private slots:
    void backClick() {emit changePage(Page::menuPage);}

private:
    void initButtons();

    Ui::InfoPage  *ui;
    Network       *connector;
};

#endif // INFOPAGE_H
