#include "lists.h"
/**
 * listint_len - function
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while(h)
{
h->next;
i++;
}
return (i);
}
