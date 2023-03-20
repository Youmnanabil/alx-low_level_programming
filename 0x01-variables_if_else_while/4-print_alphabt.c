#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: a c program prints alphabets expect e , q
 *
 * Return: alaways 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

