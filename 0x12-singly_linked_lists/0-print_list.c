#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: the parameter who countain the string
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
	h = h->next;
	count++;
	}

	return (count);
}
