<<<<<<< HEAD
#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> 
=======

#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, free */
#include <string.h> /* size_t */

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
<<<<<<< HEAD
 * Description: singly linked list node structure
=======
 *
 * Description: singly linked list node structure
 * for Holberton project
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
<<<<<<< HEAD
/**
 * struct listp_s - singly linked list
 * @p: pointers of nodes
 * @next: pointers to the next node
 * Description: singly linked list of pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
size_t free_listint_safe(listint_t **h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
=======

/* function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
<<<<<<< HEAD
void free_listint2(listint_t **head);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);
listint_t *reverse_listint(listint_t **head);
=======
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
#endif
