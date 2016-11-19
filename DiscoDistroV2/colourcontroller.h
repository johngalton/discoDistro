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
    QList<colourControllerRow*> *rowList;

    bool checkForReds();
    bool checkForGreens();
    bool checkForBlues();
signals:

public slots:

private slots:
    void redValueChanged(bool);
    void greenValueChanged(bool);
    void blueValueChanged(bool);
    void allValueChanged(bool);
    void redTitleChanged(bool value);
    void greenTitleChanged(bool value);
    void blueTitleChanged(bool value);
    void allTitleChanged(bool value);
};

#endif // COLOURCONTROLLER_H
