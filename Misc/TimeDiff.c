#include<stdio.h>
#include <stdlib.h>
struct Time
{
    int sec, min, hr;
}t1,t2,diff;
struct Time diffTime(struct Time t1,struct Time t2)
{
    int sec1 = t1.hr*3600 + t1.min*60 + t1.sec;
    int sec2 = t2.hr*3600 + t2.min*60 + t2.sec;
    int temp1 = abs(sec1-sec2);
    int temp2 = 24*3600 - temp1;
    int sec_res = temp1>temp2?temp2:temp1;
    diff.hr = (int)sec_res/3600;
    diff.min = (int)((sec_res - diff.hr*3600)/60);
    diff.sec = sec_res - diff.hr*3600 - diff.min*60;
    return diff;
}
int main()
{
    printf("Enter the first time (24 hr format): ");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter the second time (24 hr format): ");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);
    printf("The entered times are %dhr %dmin %dsec and %dhr %dmin %dsec.",t1.hr,t1.min,t1.sec,t2.hr,t2.min,t2.sec);
    diff = diffTime(t1,t2);
    printf("The difference between them : %dhr %dmin %dsec",diff.hr,diff.min,diff.sec);
    return 0;
}