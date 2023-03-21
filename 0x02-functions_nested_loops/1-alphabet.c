#include <main.h>
/**
 * main- prints the alpahabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
