#include "lists.h"
#include <stdio.h>

/**
 * print_lsitint - print all the elements of a linkedlists
 * @h: head
 * Return: length of the string
 */
size_t print_listint(const listint_t *h)
{
	size_t index_node = 0;

	const listint_t *currentv = h;

	while (currentv != NULL)
	{
		printf("%i\n", currentv->n);
		currentv = currentv->next;
		index_nodes++;
	}
	return (index_nodes);
}
