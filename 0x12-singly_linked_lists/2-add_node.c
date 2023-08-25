#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - shall add new node at the beginning of th linked list
 * @headmy: double pointer to the list_t list
 * @str: will be new string to add in the node
 *
 * Return: is the address of the new elements, or NULL should it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
 	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
 	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
