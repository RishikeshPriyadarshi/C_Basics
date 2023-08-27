#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==2)
    {
        printf("this is a prime number \n");
    }    
    else
    {
      printf("this is not prime number \n");
    }  
    return 0;
}