#include <stdio.h>
int blah(int length,int big,int width,int blue,int red)
{
int result=length*big*width*blue*red;
}
return result;
int main()
{
    printf ("answer is %d",blah(6,5,4,5,6));
}