#include <stdio.h>
int main()
{
    int input;
    printf ("What is the input? \n");
    scanf ("%d",&input);
    int rem4=0,rem400,rem100;
    rem400=input % 400;
    rem100=input % 100;
    rem4=input % 4;
    if ( rem400 == 0  ||  rem100 != 0 && rem4 == 0  )
    {
        printf ("%d is a leap year",input);
    } 
    else
    {
        printf ("%d is not a leap year",input);
    }
    return 0;
}

