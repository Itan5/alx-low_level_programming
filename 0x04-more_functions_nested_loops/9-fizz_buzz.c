#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: prints the numbers from 1 to 100, with some fizzbuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 1;

	while
	(a <= 100)
	{
	if ((a % 15) == 0)
	{
	printf("FizzBuzz ");
	}
	else if ((a % 5) == 0)
	{
	printf("Buzz ");
	}
	else if ((a % 3) == 0)
	{
	printf("Fizz ");
	}
	else
	{
	printf("%d ", a);
	}
	a++;
	}
	printf("\n");
return (0);
}
