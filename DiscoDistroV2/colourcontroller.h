#ifndef COLOURCONTROLLER_H
#define COLOURCONTROLLER_H

#include <QWidget>
#include <QScrollArea>
#include <QBoxLayout>
#include <QList>

#include "colourcontrollerrow.h"

class colourController : public QWidget
{
    Q_OBJECT
public:
    explicit colourController(QWidget *parent = 0);
    explicit colourController(QWidget *parent, QStringList names);

private:
    QBoxLayout *mainLayout;
    QScrollArea *scrollArea;
    QWidget *scrollWidget;
    QBoxLayout *scrollLayout;
    colourControllerRow *titleRow;
    QList<colourControllerRow> rowList;
signals:

public slots:
};

#endif // COLOURCONTROLLER_H
