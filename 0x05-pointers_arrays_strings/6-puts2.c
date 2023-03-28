#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character
 * @str: a pointer
 * Return : always 0 success
 */
void puts2(char *str)
{
	int n;

	for (n = 1; str[n] != '\0'; ++n)
	{
		if (n % 2 == 0)
		_putchar(str[n]);
	}
	_putchar('\n');
}
