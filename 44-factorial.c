/*#include<stdio.h>
int main()
{
    int i=0,n=3,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial *=i;

    }
    printf("the value of factorial   %d is  %d\n",n,factorial);
    return 0;

}
*/

//

#include<stdio.h>
int main()
{
    int i=0,n,factorial=1;
    printf("enter the number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial *=i;
    }
    printf("the value of factorial %d is %d\n",n,factorial);
}