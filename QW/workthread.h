#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QWidget>
#include <QThread>

#define car_size 110

class WorkThread : public QThread
{

protected:
    void run();

};

//****************************************************c

struct care
{
    int num;
    long color;

};

struct touch
{
    char flag;
    int y;
    int x;

};

#endif // WORKTHREAD_H
