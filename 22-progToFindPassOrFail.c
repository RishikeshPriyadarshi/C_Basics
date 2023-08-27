#include<stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;

    printf("enter marks of physics\n");
    scanf("%d",&physics);

    printf("enter marks of chemistry\n");
    scanf("%d",&chemistry);

    printf("enter marks of maths\n");
    scanf("%d",&maths);

    total = (physics+chemistry+maths)/3;

    if((total<40) || physics<33 || chemistry<33 || maths<33)
    {
        printf("your total percentage is %f and you are failed\n",total);

        //printf("your total percentage is %f and you are failed\n",(int)total);//typecasting float to int
        //we can also typecast float into integer by writing int

    }

    else
    {
        printf("your total percentage is %f and you are passed\n",total);
    }

    return 0;
}