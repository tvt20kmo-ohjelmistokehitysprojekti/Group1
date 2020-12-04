#ifndef MENUPAGE_H
#define MENUPAGE_H

#include <QWidget>

#include "settings.h"

namespace Ui {
class MenuPage;
}

class MenuPage : public QWidget
{
    Q_OBJECT

public:
    explicit MenuPage(QWidget *parent = nullptr);
    ~MenuPage();

    void setCardInfo(quint32 _card_type);

signals:
    void changePage(Page page);
    void logOut();

private slots:
    void logOutClick();
    void saldoClick() {emit changePage(Page::saldoPage);}
    void withdrawClick() {emit changePage(Page::withdrawPage);}
    void transactClick() {emit changePage(Page::transactPage);}
    void payCreditClick() {emit changePage(Page::payCreditPage);}

private:
    void initButtons();

    Ui::MenuPage *ui;
};

#endif // MENUPAGE_H
