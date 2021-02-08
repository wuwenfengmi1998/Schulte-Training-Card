#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QWidget>
#include <QThread>

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

#endif // WORKTHREAD_H
