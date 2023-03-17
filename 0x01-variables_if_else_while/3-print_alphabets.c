#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	while (ch <= 122)

	{
		putchar(ch);
		ch++;
	}

	while (ch2 <= 'Z')

	{
		putchar(ch2);
		ch2++;
	}

	printf("\n");

	return (0);
}
