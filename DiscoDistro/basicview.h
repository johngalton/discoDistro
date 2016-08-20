#ifndef BASICVIEW_H
#define BASICVIEW_H

#include <QWidget>
#include <QtDebug>

class BasicView : public QWidget
{
    Q_OBJECT
public:
    BasicView(QWidget *parent = 0);
    ~BasicView();
signals:

public slots:
};

#endif // BASICVIEW_H
