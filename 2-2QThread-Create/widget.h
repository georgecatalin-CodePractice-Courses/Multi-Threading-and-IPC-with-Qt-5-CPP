#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QThread>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void count(int counter);

private slots:
    void on_startButton_clicked();

private:
    Ui::Widget *ui;
    QThread * myThread;
};
#endif // WIDGET_H
