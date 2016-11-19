#include "colourcontroller.h"

colourController::colourController(QWidget *parent) : QWidget(parent)
{
    this->mainLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->scrollArea = new QScrollArea();
    this->scrollWidget = new QWidget();
    this->scrollLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->titleRow = new colourControllerRow(this);
    this->rowList = new QList<colourControllerRow*>();

    this->mainLayout->setAlignment(Qt::AlignCenter);
    this->scrollArea->setAlignment(Qt::AlignCenter);
    this->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    this->scrollLayout->setAlignment(Qt::AlignCenter);


    this->scrollLayout->addWidget(titleRow);
    this->scrollWidget->setLayout(scrollLayout);
    this->scrollArea->setWidget(scrollWidget);
    this->mainLayout->addWidget(scrollArea);
    this->setLayout(mainLayout);
}

colourController::colourController(QWidget *, QStringList names)
{
    this->mainLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->scrollArea = new QScrollArea();
    this->scrollWidget = new QWidget();
    this->scrollLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->titleRow = new colourControllerRow(this);
    this->rowList = new QList<colourControllerRow*>();

    this->scrollLayout->addWidget(titleRow);

    QObject::connect(titleRow, SIGNAL(redButtonToggled(bool)), this, SLOT(redTitleChanged(bool)));
    QObject::connect(titleRow, SIGNAL(greenButtonToggled(bool)), this, SLOT(greenTitleChanged(bool)));
    QObject::connect(titleRow, SIGNAL(blueButtonToggled(bool)), this, SLOT(blueTitleChanged(bool)));
    QObject::connect(titleRow, SIGNAL(allButtonToggled(bool)), this, SLOT(allTitleChanged(bool)));

    foreach(QString name, names)
    {
        rowList->append(new colourControllerRow(name));
        this->scrollLayout->addWidget(rowList->last());
        QObject::connect(rowList->last(), SIGNAL(redButtonToggled(bool)), this, SLOT(redValueChanged(bool)));
        QObject::connect(rowList->last(), SIGNAL(greenButtonToggled(bool)), this, SLOT(greenValueChanged(bool)));
        QObject::connect(rowList->last(), SIGNAL(blueButtonToggled(bool)), this, SLOT(blueValueChanged(bool)));
        QObject::connect(rowList->last(), SIGNAL(allButtonToggled(bool)), this, SLOT(allValueChanged(bool)));
    }

    this->mainLayout->setAlignment(Qt::AlignCenter);
    this->scrollArea->setAlignment(Qt::AlignCenter);
    this->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    this->scrollLayout->setAlignment(Qt::AlignCenter);

    this->scrollWidget->setLayout(scrollLayout);
    this->scrollArea->setWidget(scrollWidget);
    this->mainLayout->addWidget(scrollArea);

    this->setLayout(mainLayout);
}

void colourController::redValueChanged(bool)
{
    titleRow->setRed(checkForReds());
    titleRow->setAll(checkForReds() || checkForBlues() || checkForGreens());
}

void colourController::greenValueChanged(bool)
{
    titleRow->setGreen(checkForGreens());
    titleRow->setAll(checkForReds() || checkForBlues() || checkForGreens());
}

void colourController::blueValueChanged(bool)
{
    titleRow->setBlue(checkForBlues());
    titleRow->setAll(checkForReds() || checkForBlues() || checkForGreens());
}

void colourController::allValueChanged(bool)
{
    titleRow->setRed(checkForReds());
    titleRow->setGreen(checkForGreens());
    titleRow->setBlue(checkForBlues());
    titleRow->setAll(checkForReds() || checkForBlues() || checkForGreens());
}

bool colourController::checkForReds()
{
    for (int count = 0; count < rowList->length(); count++)
    {
        if (rowList->at(count)->getRed())
            return true;
    }

    return false;
}

bool colourController::checkForGreens()
{
    for (int count = 0; count < rowList->length(); count++)
    {
        if (rowList->at(count)->getGreen())
            return true;
    }
    return false;
}

bool colourController::checkForBlues()
{
    for (int count = 0; count < rowList->length(); count++)
    {
        if (rowList->at(count)->getBlue())
            return true;
    }
    return false;
}

void colourController::redTitleChanged(bool value)
{
    for (int count = 0; count < rowList->length(); count++)
    {
        rowList->at(count)->setRed(value);
        rowList->at(count)->checkAllButtonState();
    }
}

void colourController::greenTitleChanged(bool value)
{
    for (int count = 0; count < rowList->length(); count++)
    {
        rowList->at(count)->setGreen(value);
        rowList->at(count)->checkAllButtonState();
    }
}

void colourController::blueTitleChanged(bool value)
{
    for (int count = 0; count < rowList->length(); count++)
    {
        rowList->at(count)->setBlue(value);
        rowList->at(count)->checkAllButtonState();
    }
}

void colourController::allTitleChanged(bool value)
{
    for (int count = 0; count < rowList->length(); count++)
    {
        rowList->at(count)->setRed(value);
        rowList->at(count)->setGreen(value);
        rowList->at(count)->setBlue(value);
        rowList->at(count)->setAll(value);
    }
}
