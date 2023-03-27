#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: is a pointer
 * Return: always 0 success
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
