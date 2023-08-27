#include<stdio.h>
void display();//function prototype which comes bfore main
int main()
{
    int a;//this variable is not used in the program
    printf("initalizing display\n");
    display();//function call
    printf("display function finished its work\n");
    return 0;

}
//function definition

void display()
{
    printf("i am display\n");

}