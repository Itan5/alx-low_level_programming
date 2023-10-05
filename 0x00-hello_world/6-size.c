#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints "size of various types of computer variable"
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	printf("Size of a double: %zu byte(s)\n", sizeof(double));
	printf("Size of a pointer: %zu byte(s)\n", sizeof(void*));

return (0);
}
