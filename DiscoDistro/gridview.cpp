#include "gridview.h"

GridView::GridView(QWidget *parent) : QWidget(parent)
{
    qDebug() << "Creating Grid View.";

    mainLayout = new QVBoxLayout();
    bottomLayout = new QGridLayout();
    universeSelect = new QComboBox();
    deviceList = new QListWidget(this);
    nameFrame = new QFrame();
    propertyFrame = new QFrame();
    nameLayout = new QGridLayout();
    propertyLayout = new QGridLayout();

    qDebug() << "Variables initialised for grid view.";

    universeSelect->addItem("Universe 1");
    universeSelect->setFixedWidth(200);

    qDebug() << "Set up universe select.";

    deviceList->addItem("Lights");
    deviceList->addItem("Strobes");
    deviceList->addItem("Add New...");

    qDebug() << "Set up device list.";

    nameLayout->addWidget(new QLabel("Name:"), 1,1);
    nameLayout->addWidget(new QLineEdit("Lasers"),1,2);
    nameLayout->addWidget(new QLabel("Base Address:"),2,1);
    nameLayout->addWidget(new QComboBox(),2,2);

    qDebug() << "Set up name layout.";

    nameFrame->setFrameStyle(QFrame::Panel);
    nameFrame->setLineWidth(2);
    nameFrame->setLayout(nameLayout);

    qDebug() << "Set up name frame.";

    propertyLayout->addWidget(new QLabel("Red:"),1,1);
    propertyLayout->addWidget(new QLineEdit("0"),1,2);
    propertyLayout->addWidget(new QLabel("Green:"),2,1);
    propertyLayout->addWidget(new QLineEdit("0"),2,2);
    propertyLayout->addWidget(new QLabel("Blue:"),3,1);
    propertyLayout->addWidget(new QLineEdit("0"),3,2);

    qDebug() << "Set up property layout.";

    propertyFrame->setFrameStyle(QFrame::Panel);
    propertyFrame->setLineWidth(2);
    propertyFrame->setLayout(propertyLayout);

    qDebug() << "Set up property frame.";

    bottomLayout->addWidget(deviceList, 1,1,3,1,Qt::AlignCenter);
    bottomLayout->addWidget(nameFrame,1,2,1,1,Qt::AlignCenter);
    bottomLayout->addWidget(propertyFrame, 2,2,2,1,Qt::AlignCenter);

    qDebug() << "Added everything to bottom layout.";

    mainLayout->addWidget(universeSelect);
    mainLayout->addLayout(bottomLayout);
    mainLayout->setAlignment(universeSelect,Qt::AlignCenter);

    qDebug() << "Added everything to main layout.";

    this->setLayout(mainLayout);

    qDebug() << "Set main layout.";
}

GridView::~GridView()
{
    qDebug() << "Destroying Grid View.";
}
