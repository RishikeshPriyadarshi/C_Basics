#include<stdio.h>
int factorial(int x); //function prototype

int main()
{
    int a=3;
    printf("the value of factorial %d is %d\n",a,factorial(a));
    

    return 0;

}

int factorial(int x)//function defined
{
    printf("calling (%d)\n",x);
    if(x==1 || x==0)
    {
    return 1;//return 1 means take the value 1 and return ,it will not look for other value downwards
    }
    else
    {
    return x*factorial(x-1);//n*factorial(n-1);
    } 

}
