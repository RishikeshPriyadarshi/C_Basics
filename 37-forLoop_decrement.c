//program to print n natural no in revrse order

#include<stdio.h>
int main()
{
    int n;
    printf("enter thje value of n\n");
    scanf("%d",&n);
    for(int i=n;i;i--)
    {
        printf("the value of i is %d\n",i);
    }
    return 0;
}