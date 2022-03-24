#include "main.h"

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: pointers destinations
 * @src: pointers source
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	s = 0;

	while (dest[d] != '\0')
		d++;

	while (src[s] != '\0')
	{
		s++;
		d++;

	}
	dest[d] = '\0';

	return (dest);
}
