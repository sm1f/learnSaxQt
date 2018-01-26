#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QGroupBox>
#include <QMainWindow>
#include <QMenuBar>
#include <QTextEdit>
#include <QVBoxLayout>

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
    void nyiSlot();
    void nyiSlotS(QString text);
};

#endif // MAINWINDOW_H
