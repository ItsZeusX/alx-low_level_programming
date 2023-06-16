#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head of node
 * @index: index to delete
 * Return: list with deleted node, 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t **tmp, *tmp2;

	if (!head || !*head)
		return (-1);

	i = 0;
	tmp = head;
	while (i < index && (*tmp)->next != NULL)
	{
		++i;
		tmp = &((*tmp)->next);
	}
	if (i < index)
		return (-1);

	if ((*tmp)->next)
		((*tmp)->next)->prev = (*tmp)->prev;
	tmp2 = *tmp;
	*tmp = (*tmp)->next;
	free(tmp2);
	return (1);
}
