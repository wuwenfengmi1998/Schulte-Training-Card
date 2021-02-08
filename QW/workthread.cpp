#include "workthread.h"
#include <time.h>

care car[5][5];
int car_rand_buff[26];
int car_rand_int=0;
int car_rand=0;
int while_buff=0;

void WorkThread::run()
{
    srand(time(NULL));
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
    while (true)
    {

    }
}
