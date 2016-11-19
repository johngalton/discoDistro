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

    QObject::connect(redButton, SIGNAL(stateChanged(bool)), this, SLOT(redButtonPressed(bool)));
    QObject::connect(greenButton, SIGNAL(stateChanged(bool)), this, SLOT(greenButtonPressed(bool)));
    QObject::connect(blueButton, SIGNAL(stateChanged(bool)), this, SLOT(blueButtonPressed(bool)));
    QObject::connect(allButton, SIGNAL(stateChanged(bool)), this, SLOT(allButtonPressed(bool)));

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

    QObject::connect(redButton, SIGNAL(stateChanged(bool)), this, SLOT(redButtonPressed(bool)));
    QObject::connect(greenButton, SIGNAL(stateChanged(bool)), this, SLOT(greenButtonPressed(bool)));
    QObject::connect(blueButton, SIGNAL(stateChanged(bool)), this, SLOT(blueButtonPressed(bool)));
    QObject::connect(allButton, SIGNAL(stateChanged(bool)), this, SLOT(allButtonPressed(bool)));

    this->setLayout(mainLayout);
}

void colourControllerRow::redButtonPressed(bool value)
{
    checkAllButtonState();
    emit redButtonToggled(value);
}

void colourControllerRow::greenButtonPressed(bool value)
{
    checkAllButtonState();
    emit greenButtonToggled(value);
}

void colourControllerRow::blueButtonPressed(bool value)
{
    checkAllButtonState();
    emit blueButtonToggled(value);
}

void colourControllerRow::allButtonPressed(bool value)
{
    redButton->setPressed(value);
    greenButton->setPressed(value);
    blueButton->setPressed(value);

    emit allButtonToggled(value);
}

void colourControllerRow::checkAllButtonState()
{
    if (redButton->getPressed() || greenButton->getPressed() || blueButton->getPressed())
    {
        allButton->setPressed(true);
    }
    else
    {
        allButton->setPressed(false);
    }
}

void colourControllerRow::setRed(bool value)
{
    redButton->setPressed(value);
}

void colourControllerRow::setGreen(bool value)
{
    greenButton->setPressed(value);
}

void colourControllerRow::setBlue(bool value)
{
    blueButton->setPressed(value);
}

void colourControllerRow::setAll(bool value)
{
    allButton->setPressed(value);
}

bool colourControllerRow::getRed()
{
    return redButton->getPressed();
}

bool colourControllerRow::getGreen()
{
    return greenButton->getPressed();
}

bool colourControllerRow::getBlue()
{
    return blueButton->getPressed();
}
