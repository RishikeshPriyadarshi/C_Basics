// write a program to print multiplication table of a given number n
#include <stdio.h>
int main()
{
    int num;
    printf("enter the value of number whose multiplication table is to be printed\n");
    scanf("%d", &num);
    printf("the multiplication table of  %d is\n",num);

    /*for (int i = 0; i < 10; i++)
    {
        // printf("%d X %d = %d\n",num,i,i*num);//it will print upto 9

        printf("%d X %d = %d\n", num, i + 1, (i+1) * num); // it will print value upto 10
    }*/

    for (int i = 1; i<=10; i++)
    {
        printf("%d X %d = %d\n",num,i,i*num);

    }

    return 0;
}