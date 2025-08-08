/*ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time*/

#include <stdio.h>
#include "push_swap.h"

/*
empty stack or one node : do nothing
last node points to head
stack_a now points to second node
former head now points to NULL
*/
void    ra(t_list *stack_a)
{
	printf("ra\n");
	rotate(stack_a);
}

void    rb(t_list *stack_b)
{
	printf("rb\n");
	rotate(stack_b);
}


void    rr(t_list *stack_a, t_list *stack_b)
{
	printf("rr\n");
	rotate(stack_a);
	rotate(stack_b);
}

void    rotate(t_list *stack)
{
    t_node *walker;
    t_node *former_head;

    if (!stack || !stack->head || !stack->head->next)
    {
        return ;
    }
	walker = stack->head;
    while (walker->next)
        walker = walker->next;
    walker->next = stack->head;
    former_head = stack->head;
    stack->head = stack->head->next;
    former_head->next = NULL;
}
