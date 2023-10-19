#include "main.h"
/**
* *_strcat - Concatenates two strings
* @dest: Destination string
* @src: source string
* Return: Always (dest) when successful
*/
char *_strcat(char *dest, char *src)
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
while (src[dm] != '\0')
{
dest[dx] = src[dy];
dy++;
dx++;
dm++;
}
dest[dx] = '\0';
return (dest);
}
