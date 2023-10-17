#include "main.h"

/**
* puts2 - Entry point of program
* Description: prints every other character of a string
* @str: string to be printed
* Return: no return value for void data type
*/
void puts2(char *str)
{
int dp = 0;
int dm = 0;
int k;

while
(str[dp] != '\0')
{
dm++;
dp++;
}
k = 0;
while
(k < dm - 1)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
k++;
}
_putchar('\n');
}
