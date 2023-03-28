#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character
 * @str: a pointer
 * Return : always 0 success
 */
void puts2(char *str)
{
	int n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (n = 0; n < len; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
