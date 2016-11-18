#include "strobecontroller.h"

StrobeController::StrobeController(QWidget *parent) : QWidget(parent)
{

    mainLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    slider = new QSlider(Qt::Horizontal);
    toggle = new toggleButton(this, "Strobe", Qt::white, Qt::black);

    slider->setMaximum(100);
    slider->setMinimum(1);

    mainLayout->addWidget(new QLabel("Slow"));
    mainLayout->addWidget(slider);
    mainLayout->addWidget(new QLabel("Fast"));
    mainLayout->addWidget(toggle);

    QObject::connect(slider, SIGNAL(valueChanged(int)), this, SLOT(sliderValueChanged(int)));
    QObject::connect(toggle, SIGNAL(stateChanged(bool)), this, SLOT(toggleValueChanged(bool)));

    this->setLayout(mainLayout);
}

void StrobeController::sliderValueChanged(int newValue)
{
    emit speedChanged(newValue);
}

void StrobeController::toggleValueChanged(bool newValue)
{
    emit enabledChanged(newValue);
}

