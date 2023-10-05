#include <unistd.h>
/**
 * main - Entry point of program
 *
 * Description: prints " error"
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 65);
return (0);
}
