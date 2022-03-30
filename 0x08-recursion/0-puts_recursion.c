#include "main.h"

/**
 * _puts_rescursion - prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_rescursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_puts_rescursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}
