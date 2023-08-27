#include<stdio.h>
int main()
{
    //1) those 100 century years which has diffrence of 4 hundred years
    //ex.. 1200 1600  2000 2400 etc....these are divisible by 400
    //so we can also say that the year which are divisible by 400 are leap years


    //2)those years which are completely divisble by 4 are also known years
    //ex..2012 2016 2020...2096 and

    //3)2100 2200 2300 2500 etc are not leap years because the diffrence between them is not of 4 hundred years
    int y;

    printf("enter any year\n");
    scanf("%d",&y);

    if(y%400==0 || y%4==0 && y%100!=0)
    {
        printf("this is leap year\n");
     
    } 

    else
    {
        printf("year is not leap\n");
    }

    return 0;

}