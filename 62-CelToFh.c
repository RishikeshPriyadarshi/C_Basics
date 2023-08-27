//Write an program to convert celcius temprature into faherenheit

#include<stdio.h>

int main()
{
    
    float fh;
    float cel;
    printf("enter the temprature in celcius\n");
    scanf("%f",&cel);

    //formula = (1.8)*celcius+32

    fh=(1.8)*cel+32;
    printf("celcius to faherenheit is %f to %f\n",cel,fh);

    return 0; //At the end of the main function we have to return the value from the main function
    //because we have given return type integer that is why we have to return value 0 from main function
    //if we had taken return type void then we did not have to return value


}