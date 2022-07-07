include "list.h"

/**
 * print_dlintint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 **/
 size_t print_dlintint(const dlistint_t *h)
 {
    size_t size;
    size = 0;
    if (h == NULL)
        return (size);

    while (h)
    {
        printf("%d\n", h->n);
        size++;
        h = h->next;
    }
    return (size);         
 }
