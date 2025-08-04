#include <stdio.h>
#include "push_swap.h"

void	selection_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*node_a;
	t_list	*node_b;

	node_a = *stack_a;
	while(node_a)
	{
		pb(stack_a, stack_b);
		node_a = node_a->next;
	}
	node_b = *stack_b;
	while (node_b)
	{
		pa(stack_a, stack_b);
		node_b = node_b->next;
	}
}
