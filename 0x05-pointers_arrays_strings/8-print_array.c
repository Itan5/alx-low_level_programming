#include "main.h"
#include <stdio.h>
/**
*print_array - prints n elements of an array of integers
*@a: string to be printed
*@n: value of string
*Return:void
*/
void print_array(int *a, int n)
{
int dp = 0;

while (dp < n)
{
if (dp != (n - 1))
{
printf("%d, ", a[dp]);
}
else
{
printf("%d", a[dp]);
}
dp++;
}
printf("\n");
}
