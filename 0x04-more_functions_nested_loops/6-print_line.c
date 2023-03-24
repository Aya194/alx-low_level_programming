#include "main.h"

/**
 * print_line - Prints a line of n underscores
 * @n: The number of underscores to print
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

