#include "lists.h"
/**
 * list_len - returns number of elements in given list.
 * @h: singly linked list.
 * Return: number of elements in the given list.
 */

size_t list_len(const list_t *h)
{
	size_t numelem;

	numelem = 0;
	while (h != NULL)
	{
		h = h->next;
		numelem++;
	}
	return (numelem);
}
