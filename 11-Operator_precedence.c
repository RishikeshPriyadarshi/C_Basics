#include <stdio.h>
int main()
{
    int x = 2;
    int y = 3;

    // printf("the value of 3*x - 8*y is %d\n",3*x - 8*y);

    // operators of higher priority are evaluated first in absence of parantheses

    // first priority is ghiven to *,/ and %... 2nd priority is given to + and - ...3rd priority is given to assignment operator =

    // when operator of equal priority are present in the expression then tie is taken  care by associativity
    // * /  follows left to right precdence

    printf("the value of 3*x - 8*y is %d\n", 3 * x - 8 * y);
    printf("the value of 8*y / 3*x is %d\n", 8 * y / 3 * x);
    //8*3 / 3*x = 24/6 = 4 which  is wrong answer
    //24/3*2
    //8*2=16....answer  is justified


    return 0;
}