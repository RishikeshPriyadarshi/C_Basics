//Function to calculate force of attraction on a body of mass m exerted by earth
//g=9.8

#include<stdio.h>
float force(float mass); //Function deceleration
int main()
{
    float m;
    printf("enter the value of mass in kg\n");
    scanf("%f",&m);

    //printf("the value of force in Newton is %f\n",force(m));
     printf("the value of force in Newton is %.2f\n",force(m));//%.f means how many digit u want after decimal


    return 0;
}

float force(float mass) //Function Defenition
{
    float result;

    result = mass*9.8;

    return result;
}