#include "main.h"

/**
 * *string_toupper - Entry point of program
 * Description: changes all lowercase letters of a string to uppercase
 * @str: string to be converted
 * Return: Str
 */
char *string_toupper(char *str)
{
int dp = 0;
while (str[dp] != '\0')
{
if (str[dp] >= 'a' && str[dp] <= 'z')
{
str[dp] = (str[dp] - 'a' + 'A');
}
dp++;
}
return (str);
}
