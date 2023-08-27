//prime no. are those which are divisible 1 and itself
//disclaimer: this is not the best method to solve the problem

#include<stdio.h>
int main()
{
    //value of bn is given 45 and we have to find whether it is prime no. oor not
    int n=45, prime =0;
    for(int i=2;i<45;i++)
    {
        if (n%i==0 )
        {
        prime = 1;
        break;
        }
        if(prime==1)
        {
            printf("this is not a prime number%d\n",n);
        }
        else
        {
            printf("this is a prime number%d\n",n);//output is wrong why?
        }
        return 0;

    }

}

