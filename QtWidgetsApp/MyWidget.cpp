#include "MyWidget.h"
#include <QPainter>

MyWidget::MyWidget(QWidget* parent /*= Q_NULLPTR*/) :
    QWidget(parent) {
}

void MyWidget::paintEvent(QPaintEvent* e) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::SmoothPixmapTransform |
                           QPainter::TextAntialiasing |
                           QPainter::Antialiasing |
                           QPainter::LosslessImageRendering);

    painter.save();
    painter.fillRect(rect(), QColor(133, 133, 133));
    painter.restore();
}
