#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint - free a listint_t list
 * @head: address of head of list
 * Return: nothing
 **/
void free_listint(listint_t *head)
{
	listint_t *friend;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		friend = head->next;
		free(head);
		head = friend;
	}
}
