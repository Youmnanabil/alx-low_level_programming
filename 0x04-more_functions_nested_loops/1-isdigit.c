#include "main.h"
/**
 * _isdigit - chech the code
 * @c: input
 * Return: 1 success, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
