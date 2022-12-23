#include <stdio.h>
int main() 
{
int input;
    printf ("What is the input? \n");
    scanf ("%d",&input);
    printf ("You gave %d\n",input);
    
int multiplier=1;
while(multiplier<=10)
{
    if (input>12)
    printf ("Sorry, we only except numbers till 12\n");
    break;
int ans = input*multiplier;
printf("%d*%d=%d\n",input,multiplier,ans);
multiplier=multiplier+1;
}
}
