#include "statisticalcalc.h"
#include "ui_statisticalcalc.h"

StatisticalCalc::StatisticalCalc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StatisticalCalc)
{
    ui->setupUi(this);
}

StatisticalCalc::~StatisticalCalc()
{
    delete ui;
}

