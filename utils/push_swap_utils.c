#include <stdio.h>
#include "push_swap.h"

// Return 1 if stack is sorted, else 0
// t_list * -> int
// empty stack => true
// 1 => true
// 1 2 3 4 5 => true
// -5 8 123 => true
int	is_stack_sorted(t_list *stack)
{
	unsigned int stack_len;
	int	previous_value;

	previous_value = INT_MIN;
	stack_len = ft_lstsize(stack);
	if (stack_len <= 1)
	    return (TRUE);
	while (stack)
	{
		if (stack->content < previous_value)
		    return (FALSE);
		previous_value = stack->content;
		stack = stack->next;
	}
	return (TRUE);
}
