#include <stdio.h>
/**
 * main - Entry point
 *
 * description: a c program using sizeof function
 *
 * Return: alawys 0 (success)
 */

int main(void)
{
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of a float: %u byte(s)\n", sizeof(float));
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("size of a long: %u byte(s)\n", sizeof(long));
	printf("size of a long int: %u byte(s)\n", sizeof(long int));
	return (0);
}

