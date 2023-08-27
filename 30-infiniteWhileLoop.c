#include<stdio.h>
int main()
{
    int a =11;
    while(a>10)//this will lead to an infinite loop..
    {
    printf("%d\n",a);
    a++;
    }
    return 0;
}