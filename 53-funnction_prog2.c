//WAP with three functions
//1.Good morning function which prints Good Morning
//2.Good Afternoon function which prints Good Afternoon
//3.Good Night function which prints Good Night
//main should call all of these in order 1..>..2..>..3

#include<stdio.h>
void goodMorning();//function prototype or function
void goodAfternoon();
void goodNight();

int main()
{
 goodMorning();//function call
 goodAfternoon();
 goodNight();
    return 0;
}
void goodMorning()
{
    printf("Good Morning Darshi\n");//funcn definition
}

void goodAfternoon()
{
    printf("Good Afternoon\n");
}

void goodNight()
{
    printf("Good Nigt Darshi\n");
}