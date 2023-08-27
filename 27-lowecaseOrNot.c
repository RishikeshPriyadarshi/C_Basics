#include<stdio.h>
int main()
{
    //97-122 = a-z ASCII Values
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    
    if(ch<=122 && ch>=97)
    {
        printf("this is lower case %c",ch);
    }

    else
    {
        printf("this is not lower case %c",ch);
    }
    return 0;
}