#include "lists.h"
#include<stdio.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
