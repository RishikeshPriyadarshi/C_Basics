//WAP to print first n natural no using for loop

#include<stdio.h>
int main()
{
    int i=0;
    int n;

    printf("enter the value of n\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("the number is %d\n",i+1);
    }
    return 0;

}