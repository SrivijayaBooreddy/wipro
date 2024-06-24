#include <stdio.h>
int add(int a,int b);
int main()
{
    int sum = add(5 ,3);
    printf("%d", sum);
}
int add(int a,int b)
{
  return a+b;
}
