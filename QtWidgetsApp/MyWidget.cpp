#include "MyWidget.h"
#include <QPainter>
#include <QDebug>

MyWidget::MyWidget(QWidget* parent /*= Q_NULLPTR*/) :
    QWidget(parent) {
}

void MyWidget::paintEvent(QPaintEvent* e) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::SmoothPixmapTransform |
                           QPainter::LosslessImageRendering |
                           QPainter::TextAntialiasing |
                           QPainter::Antialiasing);

    painter.save();

    painter.restore();
}
