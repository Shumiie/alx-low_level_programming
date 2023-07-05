#include <stdlib.h>
#include <string.h>
#include "string.h"
/**
 *
 * add_node_end -adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return:  the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int = 0;

	while (str[len])
		len++;
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	list_t *temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode)
}

