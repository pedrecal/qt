#include "bright.h"

bright::bright(QWidget *parent) : QWidget(parent)
{

}

bright::~bright()
{

}

void bright::apply(QImage *newImg, QImage *copyImg, bool isImage, int light)
{
    if(isImage)
    {
        QColor tempcolor;
        int grayColor = 0;
        QRgb value;
        if(copyImg->isGrayscale())
        {
            for(int i = 0; i < copyImg->width(); i++)
            {
                for(int j = 0; j < copyImg->height(); j++)
                {
                    tempcolor = copyImg->pixel(i, j);
                    grayColor = 255 - tempcolor.black();
                    grayColor += (light / 2);

                    if(grayColor > 255)
                    {
                        grayColor = 255;
                    }
                    else if (grayColor < 0)
                    {
                        grayColor = 0;
                    }

                    value = qRgb(grayColor, grayColor, grayColor);
                    newImg->setPixel(i, j, value);
                }
            }
        }
    }
}
