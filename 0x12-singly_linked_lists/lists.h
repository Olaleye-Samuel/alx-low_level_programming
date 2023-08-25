#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_smy - singly linked list
 * @str: string - (malloc'ed strings)
 * @len: the string length
 * @next: to point to next node
 *
 * Description: singly linked list node for structure
 * for Holberton projects
 */
typedef struct list_smy
{
	char *str;
	unsigned int len;
	struct list_smy *next;
} list_tmy;

size_t print_list(const list_tmy *h);
size_t list_len(const list_tmy *h);
list_tmy *add_node(list_t **head, const char *str);
list_tmy *add_node_end(list_tmy **head, const char *str);
void free_list(list_tmy *head);

#endif
