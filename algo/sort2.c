/* Sort when input n = 2*/

#include <stdio.h>
#include "push_swap.h"

void	sort_2(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_node;
	t_list	*second_node;
	int	first;
	int second;

	(void) stack_b;
	first_node = *stack_a;
	second_node = (*stack_a)->next;
	first = *(first_node->content);
	second = *(second_node->content);
	if (first < second)
	    return ;
	sa(stack_a);
}
