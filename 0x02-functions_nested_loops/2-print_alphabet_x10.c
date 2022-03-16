#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
