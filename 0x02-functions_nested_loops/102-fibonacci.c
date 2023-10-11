#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Prints first fifty fibonancci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int x = 1, y = 2, z;
	int d = 3;

	printf("%ld, %ld, ", x, y);

	while
	(d <= 50)
	{
	z = x + y;
	printf("%ld", z);
	if (d < 50)
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
