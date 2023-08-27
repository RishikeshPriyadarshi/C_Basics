//function to convert celcius temprature to faherenheit

#include<stdio.h>
float fahr(); //function deceleration
int main()
{
    int temp;
    float fh;
    printf("enter the temprature in celcius\n");
    scanf("%d",&temp);
    fh = fahr(temp); //function calling
    printf("temprature in faherenheit = %f",fh);

}

float fahr(int temp) //function defintion
{
    float fahr =(1.8)*temp+32;
    return (fahr); //returning fahr value to fh variable in main functiom..

}