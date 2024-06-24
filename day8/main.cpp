#include <stdio.h>
int global = 5;
int add(int a,int b);
int main()
{
printf(" %s : %d : %d \n",__func__, __LINE__, global);
int sum = add(12,23);
printf("sum = %d \n", sum);
return 0;
}
