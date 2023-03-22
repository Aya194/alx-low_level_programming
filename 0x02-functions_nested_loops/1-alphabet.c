#include "main.h"

/**
 * print_alphabet - prints the alphabets from a - z depending on
 * _putchar fuction
 */


void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
