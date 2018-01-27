#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "mainwindow.h"

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);

private:
    virtual void ensureOkToClose();

signals:

public slots:
    void myClose();
};

#endif // MYWIDGET_H
