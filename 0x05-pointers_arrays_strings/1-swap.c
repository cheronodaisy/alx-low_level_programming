#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: interger to swap
 * @b: interger to swap
 * Return: nothing
*/

void swap_int(int *a, int *b)

{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
