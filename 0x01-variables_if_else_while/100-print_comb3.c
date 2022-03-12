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
	int numb;
	int num = 0;

	while (num < 10)
	{
		numb = 0;
		while (numb < 10)
		{
			if (num != numb && num < numb)
			{
				putchar('0' + num);
				putchar('0' + numb);

				if (numb + numb != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numb++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
