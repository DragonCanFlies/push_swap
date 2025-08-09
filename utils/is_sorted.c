/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:45:40 by latabagl          #+#    #+#             */
/*   Updated: 2025/08/09 00:47:50 by latabagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_list *stack)
{
    t_node *walker;

    if (!stack->head || !stack->head->next)
        return (1);
    walker = stack->head;
    while (walker->next)
    {
        if (walker->number > walker->next->number)
            return (0);
        walker = walker->next;
    }
    return (1);
}
