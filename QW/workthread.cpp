#include "workthread.h"
#include <time.h>
#include <QDebug>
care car[5][5];
struct touch t;

void car_init()
{

    int car_rand_buff[26];
    int car_rand_int=0;
    int car_rand=0;
    int while_buff=0;
    for(int y=0;y<5;y++)
    {
        for(int x=0;x<5;x++)
        {

            do
            {
                while_buff=0;
                car_rand=(rand()%25)+1;
                for(int z=0;z<car_rand_int;z++)
                {
                    if(car_rand_buff[z]==car_rand)
                    {
                        while_buff=1;
                    }
                }
            }while(while_buff);


            car[y][x].num=car_rand;
            car_rand_buff[car_rand_int]=car_rand;
            car_rand_int++;
        }

    }

}

int chack_car(int y,int x)
{
    int a,b,c=0;
    a=(x/car_size);
    b=((y/car_size)*5);
    c=a+b+1;
   return c;
}

void w()
{
    int t_car_flag=0;
    srand(time(NULL));
    car_init();
    while(1)
    {
        if(t.flag)
        {
            t.flag=0;
            t_car_flag=chack_car(t.y,t.x);
            qDebug()<<t.y<<"  "<<t.x<<"  "<<t_car_flag;
        }else{t_car_flag=0;}

    }
}

void WorkThread::run()
{

    w();
}
