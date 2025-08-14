/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:13:02 by latabagl          #+#    #+#             */
/*   Updated: 2025/08/10 09:36:06 by latabagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// sort when t_list->size is between 2 and 5 
void	small_sort(t_list *stack)
{
	if (stack->size == 2)
		sort2(stack);
	else if (stack->size == 3)
		sort3(stack);
	else if (stack->size == 4)
		sort4(stack);
	else
		sort5(stack);
}

void	sort2(t_list *stack)
{
	if (!is_sorted(stack))
		sa(stack);
}

void	sort3(t_list *stack)
{
	int	first = stack->head->number;
	int	second = stack->head->next->number;
	int	third = stack->head->next->next->number;
	
	if (first < second && first < third && second > third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first > second && first < third && second < third)
		sa(stack);
	else if (first < second && first > third && second > third)
		rra(stack);
	else if (first > second && first > third && second < third)
		ra(stack);
	else if (first > second && first > third && second > third)
	{
		sa(stack);
		rra(stack);
	}
}

void	sort4(t_list *stack)
{
	printf("%i\n", find_lowest_number(stack));
	return ;
}

void	sort5(t_list *stack)
{
	(void) stack;
	return ;
}

