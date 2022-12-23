#include <stdio.h>
int isprime(int num)
{
    for (int i=2; i<=num/2; i++)
    {
        int rem=num % i;
        if (rem==0)
        return 0;
    }
    return 1;
}

    int main()
{
    int input;
    printf ("What is the input? \n");
    scanf ("%d",&input);
    printf ("You gave %d\n",input);
    for (int i=1; i<=input; i++)
    {
        if (isprime(i))
            printf ("%d\n",i);
        
    }
    return 0;
}
