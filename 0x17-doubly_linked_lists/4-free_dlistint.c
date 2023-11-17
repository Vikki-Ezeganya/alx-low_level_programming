/*
 * File: 4-free_dlistint.c
 * Auth: Victor Ezeganya
 */

#include "lists.h"

/**
 * free_dlistint - this function frees a linked dlistint_t list.
 * @head: head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
