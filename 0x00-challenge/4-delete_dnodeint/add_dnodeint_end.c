#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *l;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
        new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	l = *head;
	while (l->next)
		l = l->next;

    new->next = NULL;
    new->prev = l;
	l->next = new;

	return (new);
}
