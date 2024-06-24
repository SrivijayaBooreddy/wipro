#include <stdio.h>
#include <math.h>
int myabs(int a)
{
    printf("abs for int a = %d \n",a);
    return a > 0 ? a : -a;
}
float myabs(float f)
{
   printf("abs for float f = %f \n",f);
   return f > 0 ? f : -f;
}
int main()
{
   int x = -5;
   float f = -7.5;

  printf(" %d", myabs(x));  // 5
  printf(" %f", myabs(f));  //
  return 0;
}
