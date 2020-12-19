#include "monty.h"
/**
  * add_dnodeint_end - Return address of new end node
  * dlistint_t - struct type
  * @head: head
  * @n: data
  * Return: New node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (h)
	{
		while (h->next)
			h = h->next;
		new->prev = h;
		h->next = new;
		return (new);
	}
	else
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
}