#include "list.h"
#include <stdio.h>

/**
 * print_lsitint - print elements of linkedlists
 * @h: head
 * Return: length of the string
 * 
 */

size_t print_lsitint(const listint_t *h)
{
	size_t index_nodes = 0;
	
	const listint_t *currentv = h;

	while (currentv != NULL)
	{
		printf("%i\n", currentv->n);
		currentv = currentv->next;
		index_nodes++;
	}
	return (index_nodes);

}
