#include "loadimg.h"

LoadImg::LoadImg(QWidget *parent) : QWidget(parent)
{
    isImage = false;//Sem Imagem

    Img = new QLabel; //QLabel alocada
    Img->setBackgroundRole(QPalette::Base); //Blank BG
    Img->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);//Altura e largura setada para  variavel IGNORED, Altura e Largura
    Img->setScaledContents(true); //Setada pra qualquer escala

}

LoadImg::~LoadImg()
{
    delete Img;//Kill The Image, Motherfucker PLAU
}

void LoadImg::Load()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::currentPath());//String Que recebe o fucking nome do arquivo

    if (!FileName.isEmpty())
    {
        QImage tempImage(FileName);//Abre imagem no endereço(FileName)
        if (tempImage.isNull())
        {
            QMessageBox::information(this, tr("FUDEU!"), tr("Man, a imagem não abriu não, carrega isso direito! Cabeçote %1").arg(FileName));//Se a img não carregar corretamente
            return;
        }

        Img->setPixmap(QPixmap::fromImage(tempImage));//A imagem temporaria se torna uma mapa de pixel na label carregada
        Img->adjustSize();//Ajusta o tamanho da bagaça

        lImg = tempImage.copy();
        oImg = tempImage.copy();

        isImage = true;//Diz q a img já ta carregada, porra
    }
}

