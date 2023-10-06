#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "all alphabets in lowercase"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowalpha;

	for  (lowalpha = 'a'; lowalpha <= 'z'; lowalpha++)
	{
		putchar(lowalpha);
	}

		putchar('\n');
	return (0);
}

