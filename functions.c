#include "monty.h"
/**
  * add_dnodeint_end - Return address of new end node
  * dlistint_t - struct type
  * @head: head
  * @n: data
  * Return: New node
  */
void add_dnodeint_end(stack_t **stack, unsigned int n)
{
	stack_t *new, *h;

	h = *stack;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		exit (-1);
	}
	new->n = n;
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