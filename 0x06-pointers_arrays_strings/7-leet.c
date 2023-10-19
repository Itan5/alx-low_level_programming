#include "main.h"

/**
 * leet - Entry point of program
 *
 * Descriptions: encodes a string in 1337
 * @s: string to be encoded
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int dx, dy;

	char dp[] = "aAeEoOtTlL";
	char dm[] = "4433007711";

	dx = 0;
	while (s[dx] != '\0')
	{
		dy = 0;
		while (dy < 10)
		{
			if (s[dx] == dp[dy])
			{
				s[dx] = dm[dy];
			}
			dy++;
		}
		dx++;
	}

	return (s);
}

