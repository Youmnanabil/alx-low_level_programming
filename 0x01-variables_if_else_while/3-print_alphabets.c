#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: a c program that print alphabets
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';	
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
