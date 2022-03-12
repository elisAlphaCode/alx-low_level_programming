#include <stdio.h>

/**
 * main - prints all number of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int number;
	int lowerCase;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
	}

	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
