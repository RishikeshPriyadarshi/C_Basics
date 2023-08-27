#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 8;
    int z;
    z = b * a; // legal
    // b*z =a.... it is illegal to write because = is an assignment operator and it tells b*z to do a which does not mean anything
    //+ * - / are operators and it act on operands like 4 8..operators can be int or float..
    printf("the value of z is: %d\n", z);
    printf("the value of a+b is: %d\n", a + b);
    printf("the value of a-b is: %d\n", a - b);
    printf("the value of a*b is: %d\n", a * b);
    printf("the value of a/b is: %d\n", a / b);
    printf("the value of z is: %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d/\n", 5 % 2);
    printf("5 when divided by 2 leaves a remainder of %d/\n", -5 % 2);
    printf("5 when divided by 2 leaves a remainder of %d/\n", 5 % -2); // reminder sign will be same as numerator

    // no operator is assumed to be present
    // printf("the value of 4*5 is %d\n",(4)(5)); wrong!!
    printf("the value of 4*5 is %d\n", (4) * (5));

    // There is no operator to perform exponentation in C
    // printf("the value of 4 ^ 5 is %d\n", 4 ^ 5);//will not p;roduce 4 to the power 5 it(^) is an bitwise xor operator

    // However we can perform exponentation usin pow operator
    printf("the value of 4 to the power 5 is %f\n", pow(4, 5)); // and we have to include math library for pow function
    //we have to %f format specfier becuse it returns the double value i.e it real values


    printf("the value of 6+5 is %d\n",6+5);// int and gives int 
    printf("the value of 6+5.6 is %f\n",6+5.6);//int and float gives float
    printf("the value of 6.1+5.6 is %f\n",6.1+5.6);//float and float and float gives float




    return 0;
}