#include "lists.h"

/**
 * print_list - orint the list elements
 * @head: have the elements
 * Return: the value of y
 */

size_t print_list(const list_t *head)
{
	unsigned int i = head->len;
	unsigned int y = 1;

	while (i != '\0')
	{
		printf("[%u] %s\n", head->len, head->str);
		printf("[%u] %s\n", head->next->len, head->next->str);
		i = head->len;
		i = 0;

	if (i == '\0')
	{
		y++;
	}
	}

	return (y);
}
