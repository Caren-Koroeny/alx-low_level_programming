#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 *
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means the answer is correct.
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
