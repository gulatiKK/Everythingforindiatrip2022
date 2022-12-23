#include <stdio.h>
double sum (double l,double b,double h) 
{
    double r=l+b+h;
    return r;
}
int main()
{ 
    printf ("Answer %0.2lf",sum(1.0/3,2.2,2.28282828));
    return 0;
}
