#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "the psoitive and negative status of random numbers"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)

		printf("%d is negative\n", n);

	else if (n > 0)

		printf("%d is positive\n", n);

	else
		printf("zero");

	return (0);
}
