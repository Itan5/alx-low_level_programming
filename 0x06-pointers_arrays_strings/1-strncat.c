#include "main.h"
/**
* *_strncat - Concatenates two strings.
* @dest: Destination string
* @src: source string
* @n: Number of bytes from src
* Return: Always (dest) when successful
*/
char *_strncat(char *dest, char *src, int n)
{
int dp = 0;
int dm = 0;
int dx = 0;
int dy = 0;

while (dest[dp] != '\0')
{
dx++;
dp++;
}
while (src[dm] != '\0' && dm < n)
{
dest[dx] = src[dy];
dy++;
dx++;
dm++;
}
dest[dx] = '\0';
return (dest);
}
