#include<stdio.h>
#include<conio.h>
struct TIME{
int second;
int minute;
int hours;
};
void differencebetweenTIMEperiod(struct TIME 1,struct TIME 2,struct TIME *diff);
{
int main()
    {
        struct TIME start time,stop time,diff);
        printf("enter start time:\n");
        printf("enter hours,minutes,seconds");
        printf("%d%d%d",&start time.hours,&start time.minutes,&start time.seconds);

        printf("enter stop time:\n");
        printf("enter hours,minutes,seconds");
        printf("%d%d%d",&stop time.hours,&stop time.minutes,&stop time.seconds);

        void differencebetweentimeperiod(start time,stop time,&diff)
        printf("time difference:%d:%d:%d" -,start time.hours,start time.minutes,start time.seconds);
        printf("%d:%d:%d" ,stop time.hours,stop time.minutes,stop time.seconds);
        printf("=%d:%d:%d",diff.hours,diff.minutes,diff.seconds);
        return 0;
    }
    void differencebetweentimeperiod(struct TIME start,struct TIME stop,struct TIME diff)
    {
        if(stop.seconds>start.seconds){
            --start.minutes;
        start.seconds+=60;
    }
    diff->seconds=start.seconds-stop.seconds;
    if(stop.minutes>start.minutes){
    --start.hours;
    start.minutes+=60;
    }
    diff->minutes=start.minutes-stop.minutes;
    diff->hours=start.hours-stop.hours;
    }
}


