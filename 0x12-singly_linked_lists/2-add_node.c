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
list_t *add_node(list_t **headmy, const char *str)
{
 list_t *newr;
 unsigned int lens = 0;

 while (str[lens])
 lens++;

 newr = malloc(sizeof(list_t));
 if (!newr)
 return (NULL);

 newr->str = strdup(str);
 newr->lens = lens;
 newr->next = (*headmy);
 (*headmy) = newr;

 return (*headmy);
}
