#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_list - prints all elements of a singly linked list, list_t
 * @h: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t nodes = 0;

	if (!h)
	return (0);

	while (curr)
	{
	if (curr->str)
	printf("[%d] %s\n", curr->len, curr->str);
	else
	printf("[0] (nil)\n");

	curr = curr->next;
	nodes++;
	}
	return (nodes);
}
