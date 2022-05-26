#include "lists.h

**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (head ! = NULL)
	{
		printf("%d\n", head->next);
		head = head->next;
		nodes++;
	}
	return (nodes);
}
