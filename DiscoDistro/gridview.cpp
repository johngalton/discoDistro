#include "gridview.h"

GridView::GridView(QWidget *parent) : QWidget(parent)
{
    qDebug() << "Creating Grid View.";

    mainLayout = new QVBoxLayout();
    bottomLayout = new QGridLayout();
    universeSelect = new QComboBox();

    qDebug() << "Variables initialised for grid view.";

    universeSelect->addItem("Universe 1");
    universeSelect->setFixedWidth(200);

    mainLayout->addWidget(universeSelect);
    mainLayout->addLayout(bottomLayout);
    mainLayout->setAlignment(universeSelect,Qt::AlignCenter);

    this->setLayout(mainLayout);
}

GridView::~GridView()
{
    qDebug() << "Destroying Grid View.";
}
