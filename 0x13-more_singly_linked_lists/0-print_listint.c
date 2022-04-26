#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *print_listint - prints the list members
 *@h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (!head)
		return (0);
	printf("%d\n", h->n);

	if (h->next == NULL)
		return (1);
	return (1 + print_listint(h->next));
}
