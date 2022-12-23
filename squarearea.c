#include <stdio.h>
int area (int length,int height)
{
int result=length*height;

return result;
}
int main()
{
printf ("Area of square=%d", area(30,1009));
return 0;
}