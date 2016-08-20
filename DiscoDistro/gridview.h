#ifndef GRIDVIEW_H
#define GRIDVIEW_H

#include <QWidget>
#include <QtDebug>
#include <QComboBox>
#include <QVBoxLayout>
#include <QGridLayout>

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
};

#endif // GRIDVIEW_H
