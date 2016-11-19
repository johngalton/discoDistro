#ifndef COLOURCONTROLLERROW_H
#define COLOURCONTROLLERROW_H

#include <QWidget>
#include <QBoxLayout>
#include "togglebutton.h"

class colourControllerRow : public QWidget
{
    Q_OBJECT
public:
    explicit colourControllerRow(QString name = "blank");
    explicit colourControllerRow(QWidget *parent = 0);
    void setRed(bool value);
    void setGreen(bool value);
    void setBlue(bool value);
    void setAll(bool value);
    bool getRed();
    bool getGreen();
    bool getBlue();
    void checkAllButtonState(void);
private:
    QBoxLayout *mainLayout;
    toggleButton *redButton;
    toggleButton *greenButton;
    toggleButton *blueButton;
    toggleButton *allButton;
signals:
    void redButtonToggled(bool newState);
    void greenButtonToggled(bool newState);
    void blueButtonToggled(bool newState);
    void allButtonToggled(bool newState);
public slots:
private slots:
    void redButtonPressed(bool value);
    void greenButtonPressed(bool value);
    void blueButtonPressed(bool value);
    void allButtonPressed(bool value);
};

#endif // COLOURCONTROLLERROW_H
