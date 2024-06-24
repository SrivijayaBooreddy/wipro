#include <stdio.h>
extern int global;
static int add(int a,int b)
{
printf("add function \n");
printf(" %s : %d : %d \n", __func__, __LINE__, global);
return a + b ;
}
int addition(int a,int b)
{
return add(a, b);
}
