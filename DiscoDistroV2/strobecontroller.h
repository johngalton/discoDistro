#ifndef STROBECONTROLLER_H
#define STROBECONTROLLER_H

#include <QWidget>
#include <QSlider>
#include <QBoxLayout>
#include "togglebutton.h"

class StrobeController : public QWidget
{
    Q_OBJECT
public:
    explicit StrobeController(QWidget *parent = 0);

signals:
    void speedChanged(int newSpeed);
    void enabledChanged(bool newValue);

private:
    QBoxLayout *mainLayout;
    QSlider *slider;
    toggleButton *toggle;
public slots:

private slots:
    void sliderValueChanged(int newValue);
    void toggleValueChanged(bool newValue);
};

#endif // STROBECONTROLLER_H
