#include <iostream>
#include "myWidget.h"


MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    connect(this, SIGNAL(QWidget::closeEvent()),
            this, SLOT(myClose()));
    std::cout << "Create MyWidget" << std::endl;
}


void MyWidget::myClose()
{
    ensureOkToClose();
}


void MyWidget::ensureOkToClose()
{
    // most work in subclasses
    std::cout <<"EnsureOkToClose called" << std::endl;}
