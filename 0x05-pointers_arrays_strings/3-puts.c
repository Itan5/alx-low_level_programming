#include "main.h"

/**
* _puts - Entry point of program
* Description: Takes a pointer to an int as parameter and updates the value it
* @str: dtring to be printed
* Return: no return value for void data type
*/
void _puts(char *str)
{
int dp = 0;
while
(str[dp] != '\0')
{
_putchar(str[dp]);
dp++;
}
_putchar('\n');
}
