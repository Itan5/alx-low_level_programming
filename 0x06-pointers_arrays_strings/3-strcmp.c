#include "main.h"

/**
* *_strcmp - Entry point of program
* Description: returns the length of a string.
* @s1: first string
* @s2: second string
* Return: Always 0  when (success)
*/
int _strcmp(char *s1, char *s2)
{
int dp = 0;

while (s1[dp] != '\0' && s1[dp] == s2[dp])
{
dp++;
}
if (s1[dp] != s2[dp])
{
return (s1[dp] - s2[dp]);
}
if (s2[dp] != '\0')
{
return (-s2[dp]);
}
return (0);
}
