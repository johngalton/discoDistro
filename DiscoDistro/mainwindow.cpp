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
    menuBar = new QMenuBar(this);
    fileMenu = new QMenu("File");
    newAction = new QAction("New");
    saveAction = new QAction("Save");
    loadAction = new QAction("Load");
    exitAction = new QAction("Exit");

    qDebug() << "Initialised all main window elements.";

    fileMenu->addAction(newAction);
    fileMenu->addAction(saveAction);
    fileMenu->addAction(loadAction);
    fileMenu->addAction(exitAction);

    menuBar->addMenu(fileMenu);

    mainTab->addTab(gridView, "Grid View");
    mainTab->addTab(basicView, "Basic View");

    this->setMenuBar(menuBar);
    this->setCentralWidget(mainTab);

    qDebug() << "Set main widget for main window.";
}

MainWindow::~MainWindow()
{
    qDebug() << "Main Window Destroyed.";
}
