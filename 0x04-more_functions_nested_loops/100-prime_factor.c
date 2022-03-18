#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	int i = 2;
	int max = 0;

	while (num != 1)
	{
		while (num % 1 == 0)
		{
			if (i > max)
				max = i;
		num = num / i;
		}
	i++;
	}
	printf("%d\n", max);
	return (0);
}
