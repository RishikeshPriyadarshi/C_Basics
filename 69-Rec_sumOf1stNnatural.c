#include<stdio.h>
int sum(int N);//function declaration
int main()
{
    printf("sum of first 5 numbers is %d",sum(5));

}
int sum(int N)
{
    if(N==1)
        return(1);
        return(N+sum(N-1));
}
