#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node 
 * of a listint_t linked list.
 * @head: pointer to the head of listint_t list
 * @index: The index of the node to locate - indices start at 0
 * Return: NULL if node does not exist
 * otherwise, return the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
