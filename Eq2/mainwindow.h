#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loadimg.h"
#include <QScrollArea>

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
