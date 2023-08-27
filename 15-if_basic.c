//C program to check whether the number is even or odd

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is even\n",a);

    }
    else
    {
        printf("%d is odd",a);
    }

    return 0;

    
}