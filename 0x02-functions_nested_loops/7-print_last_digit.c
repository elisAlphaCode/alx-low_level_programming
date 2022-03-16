#include "main.h"

/**
 * print_last_digit - int c
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = (-1 * c);
		_putchar(c + '0');
		return (c);
	}
	else
	{
		_putchar(c + '0');
		return (c);
	}
}
