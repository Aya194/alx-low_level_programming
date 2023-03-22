#include "main.h"
/**
 * _isalpha - a function that checks for alphbetical character
 * @c: single letter input
 * Return: 1 if int c is lowercase or uppercase
 * , 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
