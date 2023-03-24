#include "main.h"

/**
 * print_square - Prints a square made of # characters
 * @n: The size of the square to print
 *
 * Return: void
 */
void print_square(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

