#include <stdio.h>
double sum (double z,double x,double y)
{
    double result=z+x+y;
    return result;
}
double right()
{
    printf ("answer=%0.2lf",sum(2.0,6.08560,5.012));
    return 0;
}
int main()
{
    right();
    return 0;
}
