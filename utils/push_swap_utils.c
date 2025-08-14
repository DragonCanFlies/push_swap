/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:45:48 by latabagl          #+#    #+#             */
/*   Updated: 2025/08/10 09:44:34 by latabagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// assume stack is not empty
int find_lowest_number(t_list *stack)
{
    t_node *walker;
	int		min;

    walker = stack->head;
	min = stack->head->number;
	printf("before while loop%i\n", min);
    while (walker->next)
    {
        if (min > walker->next->number)
            min = walker->next->number;
        walker = walker->next;
		printf("inside while loop%i\n", min);
    }
    return (min);
}
