#include "main.h"

/**
 * *rot13 - Entry point of program
 *
 * Descriptions: encodes a string using rot13.
 * @s: string to be encoded
 * Return: the resulting string;
 */
char *rot13(char *s)
{
	int dx, dy;

	char dp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dm[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	dx = 0;
	while (s[dx] != '\0')
	{
		dy = 0;
		while (dy < 52)
		{
			if (s[dx] == dp[dy])
			{
				s[dx] = dm[dy];
				break;
			}
			dy++;
		}
		dx++;
	}

	return (s);
}

