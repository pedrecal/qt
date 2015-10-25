#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Load = new LoadImg;

    ui->scrollArea->setWidget(Load->Img);//A imagem está sendo exibida na ScrollArea




    connect(ui->LoadButton, SIGNAL(released()), Load, SLOT(Load()));//Faz o butão ao ser solto, ativar o slot Load(abrindo a janelinha e etc.)

}

MainWindow::~MainWindow()
{
    delete Load;
    delete ui;
}
