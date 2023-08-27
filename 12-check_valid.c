#include <stdio.h>
int main()
{
    // |int a; b=a;  //invalid in C
    int a;
    int b = a; // valid
    char dt = 'd';

    int v = 3 ^ 3;// it is valid because it will compile but it will not return 27 bcause ^ is an bitwise xor operator
    printf("value of 3 ^ 3 is %d\n",v);

    float d = (3.0/8-2);// value will be real number after printing but data type will be double
    printf("%f\n",d);


    return 0;
}