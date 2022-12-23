#include <stdio.h>
double something (double base,double open,double weird)
{
    int result=base/open*weird;
    return result;
}
double main()
{
    printf ("The most accurate answer is=%0.19lf",something(22224.00000987654,2.00000987654,949.00000987654));
    return 0;
}
