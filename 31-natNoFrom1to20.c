//WAP to print natural no from 1 to 20 when initial loop counter i is initalized to 0...

#include<stdio.h>
int main()
{
    int i =0;
    while(i<=20)
    {
        if(i>=10)
        {
            printf("the value of i is %d\n",i);

        }
        i++;// i = i + 1;
    }
    return 0;
}

/*#include<stdio.h>// why it is wrong?
int main()
{
    int i =0;
    while(i>=10 && i<=20)
    {
        
            printf("the value of i is %d\n",i);

        
    }
    i++;
    return 0;
}*/