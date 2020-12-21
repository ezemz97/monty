#include "monty.h"
char *val;

/**
  * add_dnodeint_end - Return address of new end node
  * dlistint_t - struct type
  * @head: head
  * @n: data
  * Return: New node
  */
void add_dnodeint_end(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *h;
	int ene = 0;

	ene = atoi(val);
	{
		exit(-1);
	}
	
	h = *stack;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		exit (-1);
	}
	new->n = ene;
	new->next = NULL;
	if (h)
	{
		while (h->next)
			h = h->next;
		new->prev = h;
		h->next = new;
	}
	else
	{
		new->prev = NULL;
		*stack = new;
	}
}
void add_dnodeint(stack_t **head, unsigned int line_number)
{
	stack_t *new;
	int ene = 0;

	ene = atoi(val);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return;
	}
	new->n = ene;
	new->prev = NULL;
	new->next = *head;
	/*if there is no head, return new as head*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		/* else, assign previous of head to new node and head as new */
		(*head)->prev = new;
		*head = new;
	}
}