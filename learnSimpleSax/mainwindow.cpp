#include <iostream>


#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    menuBar()->setNativeMenuBar(false);

//    QMenuBar* bar = new QMenuBar(this);
    QMenuBar* bar = menuBar();

    QMenu* menu1 = new QMenu("First menu", bar);
    menu1->addMenu("Foo");
    menu1->addMenu("Bar");

    QMenu* menu2 = new QMenu("Second menu", bar);
    menu2->addMenu("Foo");
    menu2->addMenu("Bar");

    bar->addMenu(menu1);
    bar->addMenu(menu2);

    /*
    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);

    resize(QSize(600, 300));
    createMenu();


    mainLayout = new QVBoxLayout(this);


    setLayout(mainLayout);
    setWindowTitle(tr("Basic Layouts"));

    QTextEdit* bigEditor = new QTextEdit;
    bigEditor->setPlainText(tr("This widget takes up all the remaining space "
                               "in the top-level layout."));
    mainLayout->addWidget(bigEditor);
*/
}

MainWindow::~MainWindow()
{
}

void MainWindow::createMenu()
{
    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit, &QAction::triggered, this, nyiSlot);

    /*
    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));
    //QAction *quit = new QAction("&Quit", this);
    fileMenu->addAction(tr("foo"));

    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

//    connect(quit, &QAction::triggered, this, QApplication::quit);



    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction

    QMenu* menu = new QMenu(tr("Prime"), menuBar());
    QAction* action = menu->addAction(tr("Exit"));
    menuBar()->addMenu(menu);
    connect(action, SIGNAL(triggered()), SLOT(nyiSlot()));
    */
}

void MainWindow::nyiSlot()
{
    std::cout << "nyiSlot" << std::endl;
}

void MainWindow::nyiSlotS(QString text)
{
    std::cout << text.toStdString() << std::endl;
}
