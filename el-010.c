#include <stdio.h>
// learnt what a machine is
// learnt what a function is
// conditions like if, while,for
// for loop consists of 3 parts
// if is a condition
// declarations
// calling machines at different points of the program
// we have learned about 'printf and scanf'
// learned what the'&' sign does
// learned what 2 of | do
int main()
{
    // step 1
    int total=0;
    int number;
    while(1)
    {
        // step 2
        printf("Give a number to add to the total, any number less than 1 given will print the total and end the program: \n");
        scanf("%d",&number);
        // step 3
        if (number<1)
        {
            // step 5
            printf("Total=%d\n",total);
            break;
        }
        else
        {
        // step 4
            total=total+number;
        }
    }
    return 0;
}
