#include <stdio.h>
#include "push_swap.h"

int is_sorted(t_list *stack)
{
    t_node *walker;

    if (!stack->head || !stack->head->next)
        return (1);
    walker = stack->head;
    while (walker->next)
    {
        if (walker->number > walker->next->number)
            return (0);
        walker = walker->next;
    }
    return (1);
}
