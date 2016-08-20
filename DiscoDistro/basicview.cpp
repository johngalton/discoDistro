#include "basicview.h"

BasicView::BasicView(QWidget *parent) : QWidget(parent)
{
    qDebug() << "Basic View Created.";
}

BasicView::~BasicView()
{
    qDebug() << "Basic View Destroyed.";
}
