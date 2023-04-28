#ifndef LISTS_H
#define LISTS_H

/* standard library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * struct list_s - singly linked list
 *   * @str: string - (malloc'ed string)
 *    * @len: length of the string
 *     * @next: points to the next node
 *      *
 *       * Description: singly linked list node structure
 *        */
typedef struct list_s
{
		char *str;
			unsigned int len;
				struct list_s *next;
} list_t;

/**
 *  * print_list - prints all the elements of a list_t list.
 *   * @h: list_t input
 *    * Return: the number of nodes
 *     */

size_t print_list(const list_t *h);

/**
 *  * list_len - returns the number of elements in a linked list_t list.
 *   * @h: list_t pointer
 *    * Return: the number of elements
 *     */

size_t list_len(const list_t *h);

/**
 *  * add_node - adds a new node at the beginning of a list_t list.
 *   * @head: pointer to the head pointer
 *    * @str: the data in the node
 *     * Return: a pointer to the new node
 *      */

list_t *add_node(list_t **head, const char *str);

/**
 *  * add_node_end - adds a new node at the end of a list_t list.
 *   * @head: pointer to the head pointer
 *    * @str: the data in the node
 *     * Return: address of the new element
 *      */

list_t *add_node_end(list_t **head, const char *str);

/**
 *  * free_list - frees a list_t list.
 *   * @head: head pointer
 *    * Return: void
 *     */

void free_list(list_t *head);
#endif /* lists_h */
