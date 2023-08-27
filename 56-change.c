#include<stdio.h>
void change(int a);


int main()
{
    int b=22;
    printf("the value of b before change  is %d\n",b);
    change(b);
    printf("the value of b is after change is %d\n",b);
}
void change(int a)
{
   a=77;
}
