#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);//& i.e adress of any value means user will read it during compile time
    while(a<10)
    {
        printf("%d\n",a);
        a++;
    }

    return 0;

}