#include<stdio.h>
//sum is a function which takes a and b as input and returns an integer as an output 
int sum(int a,int b);//function prototype declaration

int main()
{
    int c;
    c=sum(3,5);//function call  //here 3 and 5 are arguments //arguments are actual i.e are actual values
    printf("The value of c is %d",c);
    return 0;
}
int sum(int a,int b) //a and b are parameters
{
    int result;
    result = a+b;
    return result;
}

//parameters are the values or variable placeholders in the function definition...Ex a and  b

//Arguments are the actual values passed to the function to make a call..Ex 3 and 5