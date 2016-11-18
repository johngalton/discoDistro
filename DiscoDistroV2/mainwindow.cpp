#include "mainwindow.h"
#include "qmenubar.h"
#include "qmenu.h"
#include "togglebutton.h"
#include "strobecontroller.h"
#include "speedcontroller.h"

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

    this->setMinimumSize(800,400);
    this->setMenuBar(menuBar);
    this->setWindowTitle("Disco Distro " + version);

    speedController *speedControl = new speedController(this);
    toggleButton *tb = new toggleButton(this, "Test Button");
    toggleButton *tb2 = new toggleButton(this, "Test Button 2", Qt::green, Qt::blue, Qt::black, Qt::white);
    toggleButton *tb3 = new toggleButton(this, "Test Button 3");
    StrobeController *sc = new StrobeController(this);

    mainLayout->addWidget(speedControl);
    mainLayout->addWidget(tb);
    mainLayout->addWidget(tb2);
    mainLayout->addWidget(tb3);
    mainLayout->addWidget(sc);

    mainWidget->setLayout(mainLayout);

    this->setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}
