#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @b: a pointer
 * @a: a pointer
 * Return: always 0 success
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
