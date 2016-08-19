#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << "Main Window Created.";

    mainTab = new QTabWidget(this);
    gridView = new GridView(this);

    mainTab->addTab(gridView, "Grid View");
}

MainWindow::~MainWindow()
{
    qDebug() << "Main Window Destroyed.";
}
