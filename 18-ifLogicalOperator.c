#include<stdio.h>
int main()
{
    int age;
    int vipPass = 0;
    vipPass=1;

    printf("enter ur age\n");
    scanf("%d",&age);

    //if(age<=90 && age>=18)
    if((age<=90 && age>=18) || vipPass==1)
    {
        printf("u can drive\n");

    }
    else
    {
       printf("u can't drive\n");

    }
}