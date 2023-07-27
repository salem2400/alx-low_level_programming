#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
                h = h->next;
                count++;
        }
        return (count);
}
