#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QBoxLayout *mainLayout;
    QWidget *mainWidget;
public:
    QString version;
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
