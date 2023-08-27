/*WAP using functions to print the following pattern(first n lines)
*
***
*****
*/

#include<stdio.h>
void printpattern(int n);//function declaration //function pattern is of void type so it will return nothing
int main()
{
    int n=3;//number of lines we want to print
    printpattern(n);//here we have called printpattern with argument n
    //function call
    return 0;

}
/* for n=3
*
***
*****
for 1-we need 1 star(*)
2-3
3-5

so it can get fit in the formula of (2n-1)
*/        

void printpattern(int n)//function definition
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for(int i=0;i<(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");

}