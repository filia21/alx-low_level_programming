#include "lists.h"
/**
 * list_len - return number of linked list
 * @h: first parameter
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
