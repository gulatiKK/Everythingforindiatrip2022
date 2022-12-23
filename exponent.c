#include <stdio.h>
 int power (int base,int exponent)
 {
   int result=base;
    while (exponent>1) {
        result=result*base;
        exponent=exponent-1;
    }
    return result;
 }
 
int main()
{
  printf ("Correct Answer %d",power(9,8));
  return 0;
}