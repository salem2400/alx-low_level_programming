#include "lists.h"

/**
 * print_list - orint the list elements
 * @head: have the elements
 * Return: the value of y
 */
size_t print_list(const list_t *head)
{
	size_t s = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		s++;
	}

	return (s);
}
