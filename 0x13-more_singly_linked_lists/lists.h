#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: an intiger
 * @next: next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t recursion_printer(const listint_t *h);

#endif
