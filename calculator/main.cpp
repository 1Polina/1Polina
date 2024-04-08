#include "widgetmy.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widgetmy w;
    w.show();
    return a.exec();
}
