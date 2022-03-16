#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
*/
void print_alphabet(void)
{
	char lowerCase;

	lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		_putchar(lowerCase);
		lowerCase++;
	}
	_putchar('\n');
}
