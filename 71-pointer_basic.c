#include<stdio.h>
int main()
{
    int i = 34;
    int *j = &i; //j will now store the address of i

    //diffrent ways to print values of i
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);

    //diffrent ways to print address of i
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);

    //diffrent way to print address and value of j
    printf("The address of j is %u\n",&j);
    printf("The value of j is %d\n",*(&j));
    return 0;
}