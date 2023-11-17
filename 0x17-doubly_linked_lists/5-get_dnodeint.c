/*
 * File: 5-get_dnodeint.c
 * Auth: Victor Ezeganya
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in the dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: if node does not exist, return - NULL.
 *         otherwise return - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
