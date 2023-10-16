#include "main.h"

/**
* _strlen - Entry point of program
* Description: returns the length of a string.
* @s: The string whose lenght is to be returned
* Return: Always length when (success)
*/
int _strlen(char *s)
{
int num = 0;
int length = 0;

while
(s[num] != '\0')
{
length++;
s++;
}
return (length);
}
