#include "colourcontroller.h"

colourController::colourController(QWidget *parent) : QWidget(parent)
{
    this->mainLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->scrollArea = new QScrollArea();
    this->scrollWidget = new QWidget();
    this->scrollLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->titleRow = new colourControllerRow(this);

    this->scrollLayout->setAlignment(Qt::AlignCenter);

    //this->scrollLayout->setAlignment(Qt::AlignTop);
    this->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    this->scrollLayout->addWidget(titleRow);
    this->scrollWidget->setLayout(scrollLayout);
    this->scrollArea->setWidget(scrollWidget);
    this->mainLayout->addWidget(scrollArea);
    this->setLayout(mainLayout);
}

colourController::colourController(QWidget *parent, QStringList names)
{
    this->mainLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->scrollArea = new QScrollArea();
    this->scrollWidget = new QWidget();
    this->scrollLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    this->titleRow = new colourControllerRow(this);

    this->scrollLayout->addWidget(titleRow);

    foreach(QString name, names)
    {
        this->scrollLayout->addWidget(new colourControllerRow(name));
    }

    this->scrollWidget->setLayout(scrollLayout);
    this->scrollArea->setWidget(scrollWidget);
    this->mainLayout->addWidget(scrollArea);
    this->setLayout(mainLayout);
}
