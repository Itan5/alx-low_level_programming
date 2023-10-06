#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "hexadecimal numbers starting from 0"
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	char hexint;

	hexint = '0';

	while
		(hexint <= '9')
	{
		putchar(hexint);
		hexint++;
	}

	hexint = 'a';

	while
		(hexint <= 'f')
	{
		putchar(hexint);
		hexint++;
	}

		putchar('\n');
	return (0);
}

