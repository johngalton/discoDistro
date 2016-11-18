#ifndef COLOURCONTROLLERROW_H
#define COLOURCONTROLLERROW_H

#include <QWidget>
#include <QBoxLayout>
#include "togglebutton.h"

class colourControllerRow : public QWidget
{
    Q_OBJECT
public:
    explicit colourControllerRow(QString name = "blank");
    explicit colourControllerRow(QWidget *parent = 0);
private:
    QBoxLayout *mainLayout;
    toggleButton *redButton;
    toggleButton *greenButton;
    toggleButton *blueButton;
    toggleButton *allButton;
signals:

public slots:
};

#endif // COLOURCONTROLLERROW_H
