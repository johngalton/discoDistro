#ifndef SPEEDCONTROLLER_H
#define SPEEDCONTROLLER_H

#include <QWidget>
#include <QRadioButton>
#include <QBoxLayout>

class speedController : public QWidget
{
    Q_OBJECT
public:
    explicit speedController(QWidget *parent = 0);
    enum speed {slow, medium, fast};
signals:
    void speedChanged(speed newSpeed);
private:
    QBoxLayout *mainLayout;
    QRadioButton *slowButton;
    QRadioButton *mediumButton;
    QRadioButton *fastButton;
    speed setSpeed;
public slots:
    void slowSelected(bool);
    void mediumSelected(bool);
    void fastSelected(bool);

};

#endif // SPEEDCONTROLLER_H
