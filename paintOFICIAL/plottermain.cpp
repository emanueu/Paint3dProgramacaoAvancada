#include "plottermain.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

PlotterMain::PlotterMain(QWidget *parent) : QWidget(parent)
{

}

void PlotterMain::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());
}
