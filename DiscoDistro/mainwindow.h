#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QtDebug>

#include "gridview.h"
#include "basicview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QTabWidget *mainTab;
    GridView *gridView;
    BasicView *basicView;
};

#endif // MAINWINDOW_H
