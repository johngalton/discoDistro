#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

#include <QWidget>
#include <QLabel>
#include <QBoxLayout>

class toggleButton : public QWidget
{
    Q_OBJECT
public:
    explicit toggleButton(QWidget *parent = 0, QString Text = "Button", QColor onBackgroundColour = Qt::red, QColor onTextColour = Qt::white, QColor offBackgroundColour = Qt::gray, QColor offTextColour = Qt::black);

private:
    QBoxLayout *mainLayout;
    QLabel *label;
    bool pressed;
    QColor onBackgroundColour;
    QColor offBackgroundColour;
    QColor onTextColour;
    QColor offTextColour;

    void updateColours(void);
signals:
    void stateChanged(bool newState);
public slots:

protected:
    void mousePressEvent(QMouseEvent *event);

};

#endif // TOGGLEBUTTON_H
