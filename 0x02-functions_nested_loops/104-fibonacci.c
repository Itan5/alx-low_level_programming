#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Prints first 98 fibonancci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long x = 1, y = 2, z;
	long int d = 3;

	printf("%lu, %lu, ", x, y);

	while
	(d <= 98)
	{
	z = x + y;
	printf("%lu", z);
	if (d < 98)
	{
	printf(", ");
	}
	else
	{
	printf("\n");
	}
	x = y;
	y = z;
	d++;
	}
	return (0);
}
