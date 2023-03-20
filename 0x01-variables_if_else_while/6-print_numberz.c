#include <stdio.h>

/**
 *main - prints single digit numbers from base 10,
 *	only using putchar and whithout char variables.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
