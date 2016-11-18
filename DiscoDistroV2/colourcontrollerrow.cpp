#include "colourcontrollerrow.h"

colourControllerRow::colourControllerRow(QWidget *parent) : QWidget(parent)
{
    mainLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    redButton = new toggleButton(this, "Red", Qt::red, Qt::white);
    greenButton = new toggleButton(this, "Green", Qt::green, Qt::black);
    blueButton = new toggleButton(this, "Blue", Qt::blue, Qt::white);
    allButton = new toggleButton(this, "All", Qt::white, Qt::black);

    mainLayout->addWidget(redButton);
    mainLayout->addWidget(greenButton);
    mainLayout->addWidget(blueButton);
    mainLayout->addWidget(allButton);

    this->setLayout(mainLayout);
}

colourControllerRow::colourControllerRow(QString name)
{
    mainLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    redButton = new toggleButton(this, name, Qt::red, Qt::white);
    greenButton = new toggleButton(this, name, Qt::green, Qt::black);
    blueButton = new toggleButton(this, name, Qt::blue, Qt::white);
    allButton = new toggleButton(this, name, Qt::white, Qt::black);

    mainLayout->addWidget(redButton);
    mainLayout->addWidget(greenButton);
    mainLayout->addWidget(blueButton);
    mainLayout->addWidget(allButton);

    this->setLayout(mainLayout);
}
