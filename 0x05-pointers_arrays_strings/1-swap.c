#include "main.h"

/**
* swap_int - Entry point of program
* Description: Takes a pointer to an int as parameter and updates the value it
* @a: Pointer to the first value to be changed
* @b: Pointer to the second value to be changed
* return: no return value for void integer
*/
void swap_int(int *a, int *b)
{
int dp = *a;
*a = *b;
*b = dp;
}
