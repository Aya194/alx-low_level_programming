#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c : the charachter to print
 * Return : Always 1 (Success)
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
