#include "lists.h"
#include<stdio.h>
#include<stio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
