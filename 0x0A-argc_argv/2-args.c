#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
