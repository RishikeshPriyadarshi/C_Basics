/*#include<stdio.h>
int main()
{
    int num;
    printf("enter the value of number whose multiplication table is to be printed\n");
    scanf("%d",&num);
    printf("the multiplication table of %d is\n",num);

    for(int i=10;i;i--)
    {
    printf("%d X %d = %d\n",i,num,i*num);
    }
}*/

#include<stdio.h>
int main()
{
    printf("multiplication table of 10\n");
    for(int i=10;i;i--)
    {
    printf("10 X %d = %d\n",i,10*i);
    }
    return 0;
}