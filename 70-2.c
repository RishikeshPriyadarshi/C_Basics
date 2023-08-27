//the value pattern should equal to the value entered by the user..the pattern look like this
//when n=4
//print the following pattern

//*
//**
//***
//****

//note:for loop is generally used in majority of cases used when it is known hum kisi bhi kaam
//ko kitni baar kar rahe..for ex..here we have to print pattern n=4 times

//note:while loop is generally used when we have condition given i.e means jab tak aisa ho print krte raho
//jaise ki linked list ke traversal me while loop use hoti hai..kyo?
//kyoki linked list ke traversal me aisa condition hota hai jb tk apka last ponter null na ho aap 
//aap list ko print krte raho..halanki for loop me break laga bhi kr sakte hai

#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);

    //run this for loop because we want to print the values n-times\
    //n-times everytime we are printing one line
    for(int i=0;i<n;i++)
    {
        //print(i+1) stars
       for(int j=0;j<i+1;j++)
       {

        printf("*");//here newline charcter /n is not given

       }
       printf("\n");//because we want *(star ) to be printed in new line

    }
    return 0;
}

