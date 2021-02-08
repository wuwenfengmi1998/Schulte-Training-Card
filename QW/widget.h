#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void mainrun_timeout();
protected:
    //重写绘图事件  虚函数
    //如果在窗口绘图，必须放在绘图事件里实现
    //绘图事件内部会自动调用，窗口需要重绘的时候（状态改变）
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);//------------------鼠标按下事件
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
