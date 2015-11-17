#ifndef BRIGHT_H
#define BRIGHT_H

#include <QWidget>
#include <QLabel>

class bright : public QWidget
{
    Q_OBJECT
public:
    explicit bright(QWidget *parent = 0);
    ~bright();
    void apply(QImage *, QImage *, bool, int);
signals:

public slots:

};

#endif // BRIGHT_H
