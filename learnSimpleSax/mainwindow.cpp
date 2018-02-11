#include <iostream>


#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    menuBar()->setNativeMenuBar(false);

    resize(QSize(600, 300));
    createMenu();

    /*
    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);



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
    //    QMenuBar* bar = new QMenuBar(this);
    QMenuBar* bar = menuBar();

    QMenu* testsMenu = bar->addMenu(tr("tests"));
//    testsMenu->addMenu("Test1")->addAction(test1);
    QAction* tests1Act = new QAction("&Test1", this);
    testsMenu->addAction(tests1Act);
    connect(tests1Act, SIGNAL(triggered()),
            this, SLOT(test1()));
    testsMenu->addMenu("Test2");

    QMenu* myWidgetMenu = new QMenu("MyWidget", bar);
    myWidgetMenu->addMenu("Make MyWidget");
    myWidgetMenu->addMenu("myClose");
    myWidgetMenu->addMenu("Test2");

    QMenu* menu2 = new QMenu("Second menu", bar);
    menu2->addMenu("Foo");
    menu2->addMenu("Bar");

    bar->addMenu(myWidgetMenu);
    bar->addMenu(menu2);

    QAction *quitAct = new QAction("&Quit", this);

    QMenu *fileMenu = menuBar()->addMenu("&File");
    fileMenu->addAction(quitAct);
    //QMenu* topTest1 = bar->addMenu("&TopTest");
    //topTest1->addAction(quitAct);
    //connect(topTest1, &QAction::triggered, qApp, QApplication::quit);

//    connect(quit, &QAction::triggered, this, nyiSlot);
    connect(quitAct, &QAction::triggered, qApp, QApplication::quit);

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

void MainWindow::test1()
{
    std::cout << "MainWindow::test1" << std::endl;
}

void MainWindow::test2()
{
    std::cout << "MainWindow::test2" << std::endl;
}

void MainWindow::nyiSlot()
{
    std::cout << "nyiSlot" << std::endl;
}

void MainWindow::nyiSlotS(QString text)
{
    std::cout << text.toStdString() << std::endl;
}
