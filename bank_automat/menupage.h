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

signals:
    void changePage(quint32 page);
    void logOut();

private slots:
    void logOutClick();
    void saldoClick() {emit changePage(Page::saldoPage);}

private:
    void initButtons();

    Ui::MenuPage *ui;
};

#endif // MENUPAGE_H
