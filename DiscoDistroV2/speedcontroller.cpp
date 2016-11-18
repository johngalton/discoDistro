#include "speedcontroller.h"

speedController::speedController(QWidget *parent) : QWidget(parent)
{
    mainLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    slowButton = new QRadioButton("Slow");
    mediumButton = new QRadioButton("Medium");
    fastButton = new QRadioButton("Fast");

    slowButton->setChecked(true);

    slowButton->setStyleSheet("margin:0 100;");
    mediumButton->setStyleSheet("margin:0 100;");
    fastButton->setStyleSheet("margin:0 100;");

    mainLayout->setAlignment(Qt::AlignHCenter);
    mainLayout->addWidget(slowButton);
    mainLayout->addWidget(mediumButton);
    mainLayout->addWidget(fastButton);

    QObject::connect(slowButton, SIGNAL(clicked(bool)), this, SLOT(slowSelected(bool)));
    QObject::connect(mediumButton, SIGNAL(clicked(bool)), this, SLOT(mediumSelected(bool)));
    QObject::connect(fastButton, SIGNAL(clicked(bool)), this, SLOT(fastSelected(bool)));

    this->setLayout(mainLayout);
}

void speedController::slowSelected(bool)
{
    this->setSpeed = slow;
    emit speedChanged(setSpeed);
}

void speedController::mediumSelected(bool)
{
    this->setSpeed = medium;
    emit speedChanged(setSpeed);
}

void speedController::fastSelected(bool)
{
    this->setSpeed = fast;
    emit speedChanged(setSpeed);
}
