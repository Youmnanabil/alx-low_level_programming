#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: a pointer
 * Return: always 0 success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str + 0);
		str++;
	}
	_puts('\n');
}
