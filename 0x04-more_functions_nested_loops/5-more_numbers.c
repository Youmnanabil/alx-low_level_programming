#include "main.h"
/**
 * more_numbers - check the code
 * Return: always 0 success
 */
void more_numbers(void)
{
	int n, i, count;

	for (i = 1; i <= 10; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (cout > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(n + 48)
		}
	_putchar('\n');
}
