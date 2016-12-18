#ifndef WFMUWINDOW_H
#define WFMUWINDOW_H

#include <QMainWindow>

namespace Ui {
class wfmuWindow;
}

class wfmuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit wfmuWindow(QWidget *parent = 0);
    ~wfmuWindow();

private slots:
    void on_buttonPLAY_clicked();

    void on_buttonSTOP_clicked();

    void on_boxSTREAMSELECT_currentIndexChanged(int index);

    void on_horizontalSlider_valueChanged(int value);

    void textUpdate();

private:
    Ui::wfmuWindow *ui;
};

#endif // WFMUWINDOW_H
