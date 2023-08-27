#include<stdio.h>

void wrong_swap(int a,int b);//we have used return type void instead of int because we do not want anything in return

void swap(int *a,int *b);

int main()
{
    int x=3,y=4;
    printf("the value of x and y before swap is %d and %d\n",x,y);

   // wrong_swap(x,y);//will not work due to call by value


//&x is an address and this address is stored by variable int*
   swap(&x,&y);//this will work due to call by refernce
    printf("the value of x and y after swap  is %d and %d\n",x,y);

    return 0;
}
void wrong_swap(int a,int b) //This will not work
{           
    int temp;
    temp = a;
    a = b;
    b = temp;

}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;//to get the value of an address we use star(*)//the type of temp is int so we will not put * on temp
    *a=*b;//address whatever we have taken from swap and *a means actual value of x
    *b=temp;

}