#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;
	char ch = 'a';

	while (n >= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (ch >= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

