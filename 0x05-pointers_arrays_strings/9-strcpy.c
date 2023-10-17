#include "main.h"

/**
* *_strcpy - Entry point of program
* Description: returns the length of a string.
* @dest: destination string
* @src: source string
* Return: Always dest  when (success)
*/
char *_strcpy(char *dest, char *src)
{
int num = 0;
int length = 0;
int dp;

while
(src[num] != '\0')
{
length++;
num++;
}
dp = 0;
while
(dp <= (length - 1))
{
dest[dp] = src[dp];
dp++;
}
return (dest);
}
