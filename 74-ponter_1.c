//WAP to print the address of a variable to get the value of this variable

/*#include<stdio.h>
int main()
{
    int a;
    printf("The address of varriaable a is %d",&a);
    return 0;


}*/

#include<stdio.h>
int main()
{
    int a=6;
    int *ptr;
    ptr=&a;

    printf("The value of address of a is %d\n",a);//both 1st and 3rd printf are same
    //pointer ptr means address
    printf("The address of the variable a is %u\n",ptr);//pointer ek dabba hai jiske andar address hai

    //*ptr means the value at that address i.e.*ptr lagane se us pointer ke under jo value hai wo aajayegi
    //or yaha pe ptr ke andar a ki address hai
    printf("The value of the varible a is %d\n",*ptr);

}