#include "mainwindow.h"

#include <QtWidgets/QApplication>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFontDatabase::addApplicationFont(":/fonts/SquadaOne");
    a.setFont(QFont("Squada One", 10, QFont::Normal, false));

    MainWindow w;
    w.show();
    return a.exec();
}
