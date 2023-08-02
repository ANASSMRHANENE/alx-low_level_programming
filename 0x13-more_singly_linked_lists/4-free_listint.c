#inlude "lists.h"
/**
 * free_listint - function
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *node;
while (head)
{
node = head->next;
free(node);
head = node;
}
}
