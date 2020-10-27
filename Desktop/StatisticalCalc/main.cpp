#include "statisticalcalc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StatisticalCalc w;
    w.show();
    return a.exec();
}
