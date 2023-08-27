#include<stdio.h>
int main()
{
    int rating;
    printf("enter ur rating (1-5)\n ");
    scanf("%d",&rating);
    switch(rating)
    {
        case 1:
        printf("ur rating is 1\n");
        break;

        case 2:
        printf("ur rating is 2\n");
        break;

        case 3:
        printf("ur rating is 3\n");
        break;

        case 4:
        printf("ur rating is 4\n");
        break;

        case 5:
        printf("ur rating is 5\n");
        break;

        default :
        printf("ur rating is invalid");
        break;


    }

    return 0;    

}