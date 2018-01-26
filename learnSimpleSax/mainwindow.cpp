#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
{
    resize(QSize(600, 300));
    mainLayout = new QVBoxLayout(this);

    createMenu();
    setLayout(mainLayout);
    setWindowTitle(tr("Basic Layouts"));

    QTextEdit* bigEditor = new QTextEdit;
    bigEditor->setPlainText(tr("This widget takes up all the remaining space "
                               "in the top-level layout."));
    mainLayout->addWidget(bigEditor);
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenu()
{
    QMenuBar* menuBar = new QMenuBar();
    mainLayout->setMenuBar(menuBar);
    QMenu* menu = new QMenu(tr("Prime"), menuBar);
    QAction* action = menu->addAction(tr("Exit"));
    menuBar->addMenu(menu);
    connect(action, SIGNAL(triggered()), SLOT(nyiSlot()));
}

void MainWindow::nyiSlot()
{

}
