#ifndef PLOTTERMAIN_H
#define PLOTTERMAIN_H

#include <QWidget>

class PlotterMain: public QWidget {
    Q_OBJECT
private:

public:
    explicit PlotterMain(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);


signals:

public slots:

};

#endif // PLOTTERMAIN_H
