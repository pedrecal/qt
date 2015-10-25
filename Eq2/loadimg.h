#ifndef LOADIMG_H
#define LOADIMG_H

#include <QWidget>
#include <QMessageBox>
#include <QFileDialog>
#include <QLabel>

class LoadImg : public QWidget
{
    Q_OBJECT
public:
    explicit LoadImg(QWidget *parent = 0);
    ~LoadImg(); //Destructor
    QLabel *Img; //Ponteiro para QLabel, Local onde mostra Imagem
    bool isImage; //Variavel pra checar LoadImage

signals:

public slots:
    void Load (); //Declaração do Slot(Envia/Resposta do Signal) (Signal Recebe)
};

#endif // LOADIMG_H
