//check what printf("%d %d %d\n",a,++a,a++); will produce in program

#include<stdio.h>
int main()
{
    int a=3;
    printf("%d %d %d\n",a,++a,a++); //argument will pass from right to left in C********
    //so for a++ it will print 3 for ++a it will print 5 and for a it will print 5
    return 0;


}

//compiler take the arguments of printf from right to left