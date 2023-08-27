#include<stdio.h>
fibonacci(int fib);//function prototype
int main()
{
    int fib;
    printf("enter the number of terms to be printed\n");
    scanf("%d",&fib);

    fibonacci(fib);//function call

    return 0;
}

fibonacci(int fib)
{
    int n1=0,n2=1,n3,count;

    printf("fibonacci series..\n");
    printf("1.%d\n 2.%d\n",n1,n2);

    for(count=3;count<=fib;count++)
    {
        n3=n1+n2;
        printf("%d. %d\n",count,n3);

        n1=n2;
        n2=n3;
    }

}