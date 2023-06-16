#include "lists.h"

/**
 * sum_dlistint - sum all values in a dll
 * @head: pointer to dll
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
