#include "mainwindow.h"
#include "qmenubar.h"
#include "qmenu.h"
#include "togglebutton.h"
#include "strobecontroller.h"
#include "speedcontroller.h"
#include "colourcontroller.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    version = "V1.00";

    mainLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    mainWidget = new QWidget();
    QMenuBar *menuBar = new QMenuBar();
    QMenu *fileMenu = new QMenu("File");
    QAction *exit = new QAction("Exit");

    fileMenu->addAction(exit);
    menuBar->addMenu(fileMenu);

    this->setMinimumSize(910,400);
    this->setMenuBar(menuBar);
    this->setWindowTitle("Disco Distro " + version);

    speedController *speedControl = new speedController(this);
    colourController *colourControl = new colourController(this, QStringList() << "Hello" << "Goodbye" << "test1" << "Test2");
    StrobeController *sc = new StrobeController(this);

    mainLayout->addWidget(speedControl);
    mainLayout->addWidget(colourControl);
    mainLayout->addWidget(sc);

    mainWidget->setLayout(mainLayout);

    this->setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}
