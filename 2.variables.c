#include <stdio.h>
int main()
{
    int a = 4;
    // int b = 8.5; // not recommended 8.5 is not an integer it is an real no which takes float
    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 9;

    printf("value of a is %d \n", a);
    printf("value of b is %f \n", b);
    printf("value of c is %c \n", c);
    // printf("sum of a and d is %d",a+d);
    printf("sum of a and d is %d \n", e);
    return 0;
}