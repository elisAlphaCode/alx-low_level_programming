#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, sum = 0;
	int result = 0;

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			result += sum;
	}
	printf("%i\n", result);
	return (0);
}
