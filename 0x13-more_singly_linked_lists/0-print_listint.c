#include "lists.h"
#include <stdio.h>
/**
 * size_t print_listint - function to print
 * @h: a pointer parameter
 *
 *  Description: single linked list project
 * Return: intiger
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}

