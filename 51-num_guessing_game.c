#include <stdio.h>//printf comes from stdio.h header file
#include <stdlib.h> //this library is needed when we want to generate random number
#include<time.h>

int main()
{
    int number,guess;
    int nguesses = 1;
    srand(time(0));//srand is inatialised and time(0) returns the time in second and every time we run the program we will almost gat the random no
    
    //number = rand();//this will gennrate random nuber between 1 to any number
    number = rand()%100 +1;//this will generate the random number between 1 and 100
    //means after dividing with 100 whatever number comes it will remain between 1 to 100\
    
   // printf("the number is %d\n", number);//it will show the number to be guessed 
    
    //keep running the loop untill nuber is guessed
    do
    {
        printf("guess the number between 1 to 100");
        scanf("%d",&guess);
        
        if(guess>number)
        {
            printf("lower number please!\n");
        }
        else if(guess<number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("u guessed in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    

    return 0;
}