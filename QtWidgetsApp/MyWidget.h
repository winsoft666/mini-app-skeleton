#pragma once

#include <QWidget>
#include <QPaintEvent>

class MyWidget : public QWidget {
    Q_OBJECT
   public:
    MyWidget(QWidget* parent = Q_NULLPTR);

   protected:
    virtual void paintEvent(QPaintEvent* e) override;
};