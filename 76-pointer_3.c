//WAP to change the value of variable to ten times of its current value..
//write a function and pass the value by reference

//NOTE: in CALL BY VALUE the own value of variable is passed
//NOTE:In CALL BY REFERENCETHE VALUE of address is passed
/*
#include<stdio.h>
int main()
{
    int a=7;
    int c;
    c=10*a;
    printf("The value of variable is changed to ten times of its current value is %d",c);
    return 0;
}
*/

#include<stdio.h>
int ten_times(int *a);

int main()
{
    int a=7;
    int c;

    c=ten_times(&a);
    printf("The value of a is %d\n",c);    
}

int ten_times(int*a)
{
    int temp;
    temp=10*(*a);
    return temp;
}