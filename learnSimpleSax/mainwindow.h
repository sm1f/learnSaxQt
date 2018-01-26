#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QGroupBox>
#include <QMainWindow>
#include <QMenuBar>
#include <QTextEdit>
#include <QVBoxLayout>

class MainWindow : public QDialog
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
};

#endif // MAINWINDOW_H
