#include "main.h"
/**
 * _strlen - return the length of as string
 * @s: char to check
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
