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
	unsigned long int x = 1, y = 2, z;
	unsigned long int d = 2;

	while
	(x < 4000000)
	{
	z = x + y;
	if (z % 2 == 0)
	{
	d += z;
	}
	x = y;
	y = z;
	x++;
	}
	printf("%lu\n", d);
	return (0);
}
