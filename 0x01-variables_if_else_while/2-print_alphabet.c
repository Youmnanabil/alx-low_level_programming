#include <stdio.h>

/*
 * main - Entry point
 *
 * description: a c program that prints the alphabetics in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

