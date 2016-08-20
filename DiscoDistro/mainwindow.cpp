#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << "Main Window Created.";

    this->setMinimumSize(600,400);
    qDebug() << "Set Minimum Window size.";

    mainTab = new QTabWidget(this);
    basicView = new BasicView(this);
    gridView = new GridView(this);

    qDebug() << "Initialised all main window elements.";

    mainTab->addTab(gridView, "Grid View");
    mainTab->addTab(basicView, "Basic View");
    this->setCentralWidget(mainTab);

    qDebug() << "Set main widget for main window.";
}

MainWindow::~MainWindow()
{
    qDebug() << "Main Window Destroyed.";
}
