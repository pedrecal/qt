#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loadimg.h"
#include <QScrollArea>
#include "bright.h"
#include <QColor>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    LoadImg *Load;//Ponteiro pra classe que carrega a img
    bright *brightn;
    QImage *Img;
    QImage *copyImg;
    QLabel *labelImg;
    long *grayScale;
    long *grayCumulativeScale;
    long totalGray;
    float average;
    void cleanScale();
    void genScale();



private:
    Ui::MainWindow *ui;

public slots:
    void applyS(int light);
    void makeHist();
private slots:
    void on_eqBt_released();
};

#endif // MAINWINDOW_H
