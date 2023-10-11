#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Prints addition of even fibonancci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long x = 0, y = 1;
	unsigned long z = 0, d = 0;

	while (z <= 4000000)
	{
	z = x + z;
	x = y;
	y = z;

	if ((x % 2) == 0)
	d += x;

	}
	printf("%ld\n", d);
return (0);
}
