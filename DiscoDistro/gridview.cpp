#include "gridview.h"

GridView::GridView(QWidget *parent) : QWidget(parent)
{
    qDebug() << "Creating Grid View.";
}

GridView::~GridView()
{
    qDebug() << "Destroying Grid View.";
}
