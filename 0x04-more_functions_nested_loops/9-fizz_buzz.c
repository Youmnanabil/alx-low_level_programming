#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("fizz");
		else if (num % 5 == 0)
			printf("buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("fizzbuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
