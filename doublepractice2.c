#include <stdio.h>
double answer (double v,double y,double i)
{
    double result=v*y/i;
    return result;
}
int main()
{
    printf ("The computer's answer is %0.6lf",answer(99.98765498,65.987654321,5.0987654321));
    return 0;
}
