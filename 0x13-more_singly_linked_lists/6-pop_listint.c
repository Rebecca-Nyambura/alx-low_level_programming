#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the head node to be deleted
 * Return: the head node’s data (n)
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
