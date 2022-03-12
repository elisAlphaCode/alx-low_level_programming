#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(48 + number);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
