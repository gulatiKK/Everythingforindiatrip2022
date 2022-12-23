#include <stdio.h>
//EL-004
//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
int sumofseries(int num)
{
    int sum=0,count=1;
    while (count<=num)
    {
        sum=sum+count;
        count=count+1;
    }
    return sum;
}
int main()
{
    int input;
    printf ("What is the input? \n");
    scanf ("%d",&input);
    printf ("sum of series until %d is %d\n",input,sumofseries(input));
    return 0;   
}