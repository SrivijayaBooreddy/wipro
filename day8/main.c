#include <stdio.h>
#include "add.h"
int global = 5;
int main()
{
int sum = addition(12,23);
printf("sum = %d \n", sum);
printf(" %s : %d : %d \n", __func__, __LINE__, global);
return 0;
}

