#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: the parameter who countain the string
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	int sum = 0;
	if (h == NULL)
		return  (0);
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	if (h->next)
		sum += print_list(h->next);
	sum++;
	return (sum);
}
