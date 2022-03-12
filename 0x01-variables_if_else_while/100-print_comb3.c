#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by new lines.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	while (number2 < 10)
	{
		number1 = 0;
		while (number1 < 10)
		{
			if (number2 != number1 && number2 < number1)
			{
				putchar('0' + number2);
				putchar('0' + number1);

				if (number1 + number2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			number1++;
		}
		number2++;
	}
	putchar('\n');
	return (0);
}
