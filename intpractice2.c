#include <stdio.h>
int answer (int v,int y,int i)
{
    int result=v*y/i;
    return result;
}
int main()
{
    printf ("The computer's answer is %d",answer(99,65,5));
    return 0;
}