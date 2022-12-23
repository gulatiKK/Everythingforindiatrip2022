#include <stdio.h>
int blue (int length, int red)
{
    int result=length*red;
    return result;
}
int main()
{
    printf ("The correct answer is %d",blue(499,55674));
    return 0;
}