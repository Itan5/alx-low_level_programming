#include "main.h"

/**
* puts_half - Entry point of program
* Description: prints half of a string, followed by a new line.
* @str: string to be printed
* Return: no return value for void data type
*/
void puts_half(char *str)
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
if (dm % 2 == 0)
{
k = dm / 2;
while
(k < dm)
{
_putchar(str[k]);
k++;
}
}
else
{
k = (dm + 1) / 2;
while
(k < dm)
{
_putchar(str[k]);
k++;
}
}

_putchar('\n');
}
