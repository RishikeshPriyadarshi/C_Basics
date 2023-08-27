//write a program to find average of three numbers

#include<stdio.h>
float average(int a,int b,int c);//function prototype decleration

int main()
{
    int a,b,c;//here a,b,c is local variable of main function,it will not affect the value of a,b and c of average function
    //instead of a,b and c we can also take x,y and z.. it is very diffrent from variables of average

    printf("enter the value of a\n");
    scanf("%d",&a);

    printf("enter the value of b\n");
    scanf("%d",&b);

    printf("enter the value of c\n");
    scanf("%d",&c);//here ampersand(&) takes the memory address of variable(like a,b,c etc...)
    //scanf is also a function which is asking for memmory address of a whic is of integer type


    printf("the value of average is %f",average(a,b,c));

    return 0;

}

float average(int a,int b,int c)
{
    float result;
    
   // result=a+b+c/3; //this will be wrong because first c will be divided by 3 and then value of c will be added to result..

   result=(float)(a+b+c)/3; //here firstly all the value of a,b and c will be added then it will be divided by 3
   //here we have typecasted int with float by using float
   
   return result;

}