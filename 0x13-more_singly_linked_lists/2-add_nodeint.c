#include "lists.h"

/**
 * add_node - adds a new node at the start of list
 * @head: pointer to the first node of the linked list
 * @n: data to insert in new node
 *
 * Return: pointer to the new node,  NULL if operation fails
 */
listint_t *add_node(listint_t **head, const int n)
{
 listint_t *new;

 new = malloc(sizeof(listint_t));
 if (!new)
 return (NULL);

 new->n = n;
 new->next = *head;
 *head = new;

 return (new);
}
