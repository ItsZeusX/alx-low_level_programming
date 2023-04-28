#include "lists.h"

/**
 *  * add_node_end - adds a new node at the end of a list_t list.
 *   * @head: pointer to the head pointer
 *    * @str: the data in the node
 *     * Return: address of the new element
 *      */

list_t *add_node_end(list_t **head, const char *str)
{
		unsigned int len = 0;

			list_t *new_node, *current;

				new_node = malloc(sizeof(list_t));

					while (str[len] != '\0')
								len++;

						if (new_node == NULL)
									return (NULL);

							new_node->str = strdup(str);
								new_node->len = len;
									new_node->next = NULL;

										current = *head;
											if (*head == NULL)
													{
																*head = new_node;
																		return (new_node);
																			}
												while (current->next != NULL)
														{
																	current = current->next;
																		}

													current->next = new_node;

														return (new_node);
}


