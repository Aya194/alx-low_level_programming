#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 122)

	{
		if (ch == 'q' || ch == 'e')
			continue;

		putchar(ch);
		ch++;
	}

	printf("\n");

	return (0);
}
