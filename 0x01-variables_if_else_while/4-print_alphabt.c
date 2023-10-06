#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "all alphabets in lowercase except e and q"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowalpha;

	for  (lowalpha = 'a'; lowalpha <= 'z'; lowalpha++)
	{
		if (lowalpha == 'e')
		{
			continue;
		}
		if (lowalpha == 'q')
		{
			continue;
		}
		putchar(lowalpha);
	}

		putchar('\n');
	return (0);
}

