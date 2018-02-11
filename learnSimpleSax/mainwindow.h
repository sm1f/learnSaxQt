#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QGroupBox>
#include <QMainWindow>
#include <QMenuBar>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QVBoxLayout *mainLayout;

    void createMenu();
private slots:
    void test1();
    void test2();

    void nyiSlot();
    void nyiSlotS(QString text);

};

#endif // MAINWINDOW_H
