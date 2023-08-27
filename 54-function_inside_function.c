#include<stdio.h>
void goodMorning();//function //user defined function
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();//here main calls the goodMorning directly
    return 0;
}
void goodMorning()
{
    printf("goodMorning Darshi\n");
    goodAfternoon();//goodAfternoon is called by goodMorning and by main function indirectly
}
void goodAfternoon()
{
    printf("goodAfternoon Darshi\n");
    goodNight();//goodNight nis called by goodAfternoon and by main function indirectly
}
void goodNight()
{
    printf("goodNight Darshi\n");//printf is library function
}