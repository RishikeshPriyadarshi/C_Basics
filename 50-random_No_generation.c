//program to generate random number 

#include <stdio.h>//printf comes from stdio.h header file
#include <stdlib.h> //this library is needed when we want to generate random number
#include<time.h>

int main()
{
    int number;
    srand(time(0));//srand is inatialised and time(0) returns the time in second and every time we run the program we will almost gat the random no
    
    //number = rand();//this will gennrate random nuber between 1 to any number
    number = rand()%100 +1;//this will generate the random number between 1 and 100
    //means after dividing with 100 whatever number comes it will remain between 1 to 100\

    //keep running the loop untill nuber is gussed

    
    printf("the number is %d", number);
    return 0;
}