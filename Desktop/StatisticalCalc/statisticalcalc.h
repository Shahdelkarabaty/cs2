#ifndef STATISTICALCALC_H
#define STATISTICALCALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class StatisticalCalc; }
QT_END_NAMESPACE

class StatisticalCalc : public QMainWindow
{
    Q_OBJECT

public:
    StatisticalCalc(QWidget *parent = nullptr);
    ~StatisticalCalc();

private:
    Ui::StatisticalCalc *ui;
};
#endif // STATISTICALCALC_H
