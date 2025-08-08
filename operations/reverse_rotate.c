#include "push_swap.h"

// void	rra(t_list *stack_a)
// {
// 	reverse_rotate(stack_a);
// }

// void	rrb(t_list *stack_b)
// {
// 	reverse_rotate(stack_b);
// }

// void	rrr(t_list *stack_a, t_list *stack_b)
// {
// 	reverse_rotate(stack_a);
// 	reverse_rotate(stack_b);
// }
// void	reverse_rotate(t_list **stack)
// {
// 	t_list	*node;
// 	t_list	*second_last;

// 	node = *stack;
// 	while ((node->next)->next)
// 	{
// 		node = node->next;
// 	}
// 	second_last = node;
// 	node = node->next;
// 	node->next = *stack;
// 	*stack = node;
// 	second_last->next = NULL;
// }
