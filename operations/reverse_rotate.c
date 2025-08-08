#include "push_swap.h"
#include <stdio.h>

void	rra(t_list *stack_a)
{
	printf("rra\n");
	reverse_rotate(stack_a);
}

void	rrb(t_list *stack_b)
{
	printf("rrb\n");
	reverse_rotate(stack_b);
}

void	rrr(t_list *stack_a, t_list *stack_b)
{
	printf("rrr\n");
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
void	reverse_rotate(t_list *stack)
{
	t_node	*walker;
	t_node	*second_last;

	if (!stack || !stack->head || !stack->head->next)
    {
        return ;
    }
	walker = stack->head;
	while ((walker->next)->next)
	{
		walker = walker->next;
	}
	second_last = walker;
	walker = walker->next;
	walker->next = stack->head;
	stack->head = walker;
	second_last->next = NULL;
}
