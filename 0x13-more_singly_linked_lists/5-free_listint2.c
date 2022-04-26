#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- sets head to NULL
 * @head:double pointer to head
 *
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (current == NULL)
		free(current);
	else
	while (current != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}

	*head = NULL;
}
