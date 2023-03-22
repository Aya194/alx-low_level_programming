#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @ab : number input
 * Return: absolute value of ab
 */

int _abs(int ab)
{
	int num = ab * -1;

	if (ab > 0)
		return (ab);
	else if (ab < 0)
		return (num);
	else
		return (0);


}
