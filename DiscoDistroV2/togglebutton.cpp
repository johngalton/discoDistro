#include "togglebutton.h"

toggleButton::toggleButton(QWidget *, QString Text, QColor onBackgroundColour, QColor onTextColour, QColor offBackgroundColour, QColor offTextColour)
{
    this->pressed = false;
    this->label = new QLabel(Text);
    this->onBackgroundColour = onBackgroundColour;
    this->onTextColour = onTextColour;
    this->offBackgroundColour = offBackgroundColour;
    this->offTextColour = offTextColour;

    updateColours();

    this->label->setFrameStyle(QFrame::Raised);
    this->label->setAutoFillBackground(true);
    this->label->setAlignment(Qt::AlignCenter);

    this->setFixedSize(200,100);

    this->mainLayout = new QBoxLayout(QBoxLayout::TopToBottom);
    mainLayout->addWidget(this->label);

    this->setLayout(mainLayout);
}

void toggleButton::updateColours(void)
{
    QPalette palette;
    palette.setBrush(QPalette::Background, this->pressed ? this->onBackgroundColour : this->offBackgroundColour);
    palette.setBrush(QPalette::Foreground, this->pressed ? this->onTextColour : this->offTextColour);

    this->label->setPalette(palette);
    this->update();
}

void toggleButton::mousePressEvent(QMouseEvent *)
{
    this->pressed = !pressed;
    updateColours();

    emit stateChanged(this->pressed);
}
