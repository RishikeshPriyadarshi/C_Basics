/*#include<stdio.h>
int main()
{
    int i = 5;
    printf("the value after i++ is %d\n",i++);//i++ means first print then increment
    printf("the value of i is %d\n",i);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i = 5;
    printf("the value after i++ is %d\n",++i);//++i means first increment then print
    i++; //pehle print fir increment  //similarly for decrement operator
    ++i; //pehle increment fir print //similarly for decrement  operator
    printf("the value of i is %d\n",i);
    i+=10;
    printf("the value of i is %d\n",i);
    return 0;
}