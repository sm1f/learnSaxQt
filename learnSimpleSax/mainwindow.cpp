#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
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

    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit, &QAction::triggered, this, QApplication::quit);

    /*

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
