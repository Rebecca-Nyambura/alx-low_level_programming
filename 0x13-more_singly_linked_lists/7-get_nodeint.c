#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Find a node in a list
 * @head: Address of the first node in a list.
 * @index: Position of a the node to find (starting from 0).
 * Return: NULL if node does not exist
 * otherwise, return the located node
 **/

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
