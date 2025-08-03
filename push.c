/*
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty
*/

#include <stdio.h>
#include "push_swap.h"

void    pa(t_list *stack_a, t_list *stack_b)
{
	printf("pa\n");
	push(stack_a, stack_b);
}

void    pb(t_list *stack_a, t_list *stack_b)
{
	printf("pb\n");
	push(stack_b, stack_a);
}

void	push(t_list *stack_1, t_list *stack_2)
{
	t_node  *old_1_head;

	if (!stack_2->head)
	    return ;
	old_1_head = stack_1->head;
	stack_1->head = stack_2->head;
	stack_2->head = stack_2->head->next;
	stack_1->head->next = old_1_head;
	stack_1->size++;
	stack_2->size--;
}
