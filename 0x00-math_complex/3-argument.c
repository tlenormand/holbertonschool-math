#include <math.h>
#include "holberton.h"

/**
 * argument - returns the argument of a given complex number
 * @c: complex number
 * Return: argument of the complex number
 */

double argument(complex c)
{
	return (atan(c.im / c.re));
}
