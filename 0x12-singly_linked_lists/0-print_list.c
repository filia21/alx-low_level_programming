#include "lists.h"
#include <stdio.h>
/**
 * print_list - print function
 * @h: first parameter
 * Return: intigervalue
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		n++;
	}
	return (n);
}
