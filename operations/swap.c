#include <stdio.h>
#include "push_swap.h"

void	sa(t_list *stack_a)
{
	printf("sa\n");
	swap(stack_a);
}

void	sb(t_list *stack_b)
{
	printf("sb\n");
	swap(stack_b);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	printf("ss\n");
	swap(stack_a);
	swap(stack_b);
}
/* save old head
second node becomes new head
old head points to third node
new head points to old head */
void	swap(t_list *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!stack->head || !stack->head->next)
	    return ;
	first = stack->head;
	second = first->next;
	third = second->next;
	stack->head = second;
	first->next = third;
	stack->head->next = first;
}
