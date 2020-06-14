#include "sort.h"
/**
 * insertion_sort_list - order list use
 * @list: list to Insertion sort algorit implementation
 * Return: Always void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *lt_int = NULL;

	lt_int = *list;
	if (*list != NULL)
	{
		while (lt_int->next != NULL)
		{
			if (lt_int->n > lt_int->next->n)
			{
				lt_int = lt_int->next;
				while (lt_int->prev != NULL)
				{
					if (lt_int->n < lt_int->prev->n)
					{
					lt_int->prev->next = lt_int->next;
					if (lt_int->next != NULL)
						lt_int->next->prev = lt_int->prev;
					lt_int->next = lt_int->prev;

					if (lt_int->prev->prev != NULL)
					{
						lt_int->prev->prev->next = lt_int;
						lt_int->prev = lt_int->prev->prev;
						lt_int->next->prev = lt_int;
					}
					else
					{
						lt_int->prev = NULL;
						lt_int->next->prev = lt_int;
						*list = lt_int;
					}
						print_list(*list);
					}
					else
						break;
				}
			}
			lt_int = lt_int->next;
		}
	}
}
