#include "lists.h"
/**
 * add_node - adds a new node at the start
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in list.
 * Return: Returns address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nwchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nwchar = 0; str[nwchar]; nwchar++)
		;

	new->len = nwchar;
	new->next = *head;
	*head = new;

	return (*head);
}
