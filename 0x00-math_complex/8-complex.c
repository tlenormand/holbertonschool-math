#include "holberton.h"
#include <math.h>

/**
 * argument - xxx
 * @c: complex number
 * Return: return the argument of the complex number
 */

void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
