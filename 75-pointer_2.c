//WAP having a vatriable i..print the address of i..pass the the variable to the function
//and print this variable to a function and print its address..are the address same?why?..


#include<stdio.h>
void printAddress(int a)
{
    printf("The address of variable a  is %u\n",&a);
}

int main()
{
    int i=4;
    printf("The value of variable i is %d\n",i);

    printAddress(i);//function printAddress is passed value i
    
    printf("The address of the variable i is %u\n",&i);

    return 0;

}