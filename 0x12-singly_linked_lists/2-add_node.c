#include "lists.h"

/**
 *  * add_node - adds a new node at the beginning of a list_t list.
 *   * @head: pointer to the head pointer
 *    * @str: the data in the node
 *     * Return: a pointer to the new node
 *      */

list_t *add_node(list_t **head, const char *str)
{
		unsigned int len = 0;

			list_t *new_node;

				new_node = malloc(sizeof(list_t));

					while (str[len])
								len++;

						if (new_node == NULL)
								{
											return (NULL);
												}
							new_node->str = strdup(str);
								new_node->len = len;
									new_node->next = *head;
										*head = new_node;


											return (*head);
}


