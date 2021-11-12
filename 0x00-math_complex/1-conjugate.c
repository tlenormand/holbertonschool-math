#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given complex number
 * @c: complex number
 * Return: conjugate of a given complex number
 */

complex conjugate(complex c)
{
	c.im = -c.im;
	return (c);
}
