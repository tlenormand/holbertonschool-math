#include "holberton.h"
#include <math.h>

/**
 * argument - xxx
 * @c: complex number
 * Return: return the argument of the complex number
 */

void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = (c1.re * c2.re + c1.im * -c2.im * -1);
	c3->re /= (c2.re * c2.re + c2.im * -c2.im * -1);

	c3->im = (c1.re * -c2.im + c1.im * c2.re);
	c3->im /= (c2.re * c2.re + c2.im * -c2.im * -1);
}
