/*
#include<stdio.h>
int main()
{
    int i,sum=0,n=10;

    printf("enter the value of natural no to be printed\n");
    for(i=0;i<=n;i++)
    {
        sum +=i;

    }

    printf("the value of sumn (1 to 10) is %d ",sum);
}
*/

/*
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum += i;//or sum = sum+i;

    }
    printf("sum of n natural no. is %d\n",sum);

}
*/

//using while loop

#include<stdio.h>
int main()
{
    int i =1,sum=0,n=10;
    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("the value of sum(1 to 10) is %d",sum);

    return 0;
}