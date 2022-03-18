#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: n is a variable name
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(92);
			else
				if (i > j)
					_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
