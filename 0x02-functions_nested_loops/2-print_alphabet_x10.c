#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * 10 times
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n;
	int ch;

	for (n = 0 ; n < 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
