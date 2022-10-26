#include "lists.h"
#include<stdio.h>
/**
 * pop_listint - function that deletes the head node 
 * of linked list
 * @head: head pointer
 * Return: The data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
