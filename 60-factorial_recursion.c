#include<stdio.h>

int main()
{
    int num;
    int fact;
    printf("enter the number\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is %d",num,fact);

    return 0;
}

int factorial(int num)//function factorial defined
{
    int fact;
    if(num==1)
    {
        return 1;
    }
    else
    {
        fact=num*factorial(num-1);//this statement contains recursion of function
        //we called the same function factorial with argument (num-1)

        return fact;
      
    }
}