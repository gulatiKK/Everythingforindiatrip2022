#include <stdio.h>
int main()
{
    int input;
    printf ("What is the input? \n");
    scanf ("%d",&input);
    printf ("You gave %d\n",input);
    if (input<1 || input>99)
        printf("Please specify a number greater than 0 and less than 100.");
    else 
        printf ("yes this is Acceptable");
    return 0;   
}