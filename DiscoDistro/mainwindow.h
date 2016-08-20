#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QtDebug>
#include <QMenuBar>
#include <QAction>

#include "gridview.h"
#include "basicview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QAction *newAction;
    QAction *saveAction;
    QAction *loadAction;
    QAction *exitAction;
    QTabWidget *mainTab;
    GridView *gridView;
    BasicView *basicView;
};

#endif // MAINWINDOW_H
