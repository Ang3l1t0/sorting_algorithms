#include "sort.h"
/**
 * 
 * 
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *lt_int = *list;
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
                    else /* for insert node in the head position */
                    {
                        lt_int->prev = NULL;
                        lt_int->next->prev = lt_int;
                    }
                    print_list(*list);
                }
                else
                    lt_int = lt_int->next;


                /* lt_int = lt_int->prev; */
            }  
        }
        
        lt_int = lt_int->next;
    }
    
}