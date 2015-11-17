#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScrollArea>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Load = new LoadImg;
    brightn = new bright;
    grayScale = new long [256];
    grayCumulativeScale = new long[256];

    for(int i = 0; i < 256; i++)
        grayScale[i] = 0;


    Img = &Load->lImg;
    copyImg = &Load->oImg;
    labelImg = Load->Img;

    labelImg->adjustSize();
    ui->scrollArea->setWidget(labelImg);

    //CustomPlot adjustments

    ui->customPlot->xAxis->setLabel("Scale");
    ui->customPlot->yAxis->setLabel("Number");
    ui->customPlot->xAxis->setRange(0, 255);
    ui->customPlot->yAxis->setRange(0, 1000);
    ui->customPlot->QCustomPlot::setInteractions(QCP::iRangeZoom);
    ui->customPlot->setInteraction(QCP::iRangeDrag, true);
    average = 0.0;

    connect(ui->LoadButton, SIGNAL(released()), Load, SLOT(Load()));
    connect(ui->slider, SIGNAL(valueChanged(int)), this, SLOT(applyS(int)));
    connect(ui->histBt, SIGNAL(released()), this, SLOT(makeHist()));



}

MainWindow::~MainWindow()
{
    delete brightn;
    delete grayScale;
    delete grayCumulativeScale;
    delete Load;
    delete ui;
}


//Define Funcs

void MainWindow::applyS(int light)
{
    if(Load->isImage == true)
    {
        brightn->apply(Img, copyImg, Load->isImage , light);
    }
    labelImg->setPixmap(QPixmap::fromImage(*Img));
}

//FALTA Implementar 2 funcoes, a de limpar a escala(inicializacao) e a de pegar a escala de cinza da imagem, NO MINIMO

void MainWindow::makeHist()
{
    if(Load->isImage == true)
    {
        QVector<double> x(256), y(256);
        cleanScale();
        genScale();
        totalGray = 0;

        for(int i = 0; i < 256; i++)
        {
            totalGray += grayScale[i];
            grayScale[i] /= 256;
            x[i] = i;
            y[i] = grayScale[i];
        }
        ui->customPlot->addGraph();
        ui->customPlot->graph(0)->setData(x, y);
        ui->customPlot->replot();
    }
}

void MainWindow::cleanScale()
{
    for (int i = 0; i < 256; i++)
    {
        grayScale[i] = 0;
        grayCumulativeScale[i] = 0;
    }
    average = 0;
}

void MainWindow::genScale()
{
    QColor tempColor;
    int grayColor;

    for (int i = 0; i< Img->width(); i++)
    {
        for (int j = 0; j < Img->height(); j++)
        {
            tempColor = Img->pixel(i, j);
            grayColor = (255 - tempColor.black());
            grayScale[grayColor]++;
            grayCumulativeScale[grayColor]++;
            average += grayColor;
        }
    }

    average /= (float)(Img->width() * Img->height());
}

void MainWindow::on_eqBt_released()
{
    QMessageBox::information(this, tr("Equalize"), tr ("In Progress"));
}
