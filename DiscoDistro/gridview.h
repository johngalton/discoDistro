#ifndef GRIDVIEW_H
#define GRIDVIEW_H

#include <QWidget>
#include <QtDebug>
#include <QComboBox>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QListWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>

class GridView : public QWidget
{
    Q_OBJECT

public:
    GridView(QWidget *parent = 0);
    ~GridView();
private:
    QVBoxLayout *mainLayout;
    QGridLayout *bottomLayout;
    QComboBox *universeSelect;
    QListWidget *deviceList;
    QFrame *nameFrame;
    QFrame *propertyFrame;
    QGridLayout *nameLayout;
    QGridLayout *propertyLayout;
};

#endif // GRIDVIEW_H
