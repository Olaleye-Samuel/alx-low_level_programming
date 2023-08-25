#include <stdlib.h>
#include "lists.h"

/**
 * free_list - will free a linked list
 * @head: the list_t list to be freed frpm the code
 */
void free_list(list_t *headmy)
{
 list_t *temp;

 while (headmy)
 {
 temp = headmy->next;
 free(headmy->str);
 free(headmy);
 headmy = temp;
 }
}
