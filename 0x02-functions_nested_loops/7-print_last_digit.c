#include "main.h"

/**
 * print_last_digit - int c
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int c);
{
	lastDigit = c % 10;

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
