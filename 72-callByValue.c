#include<stdio.h>
int sum(int x, int y);
int main()
{
    int x=4, y=7;
    printf("The value of x and y is %d and %d\n",x,y);
    printf("The value of 4+7 is %d\n",sum(x,y));
    printf("The value of x and y after function call is %d and %d\n",x,y);
    return 0;
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    x=3434;
    y=23432;
    
    return c;//Important Note:the value of a and b will not be changed i.e.it will remain 4 and 7
    //because the value of a and b get copied and return to call by value

    //value is not changed because with the help of function we cannot change the variables of main
    //without the use of pointer we cannot change the variables of main function


}