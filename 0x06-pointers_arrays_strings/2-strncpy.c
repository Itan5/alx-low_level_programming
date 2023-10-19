#include "main.h"

/**
* *_strncpy - Entry point of program
* Description: returns the length of a string.
* @dest: destination string
* @src: source string
* @n: number of bytes to be copied from src
* Return: Always dest  when (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
int dp = 0;
int dm = 0;

while
(src[dp] != '\0' && dp < n)
{
dest[dp] = src[dp];
dm++;
dp++;
}
while
(dm < n)
{
dest[dm] = '\0';
dm++;
}
return (dest);
}
