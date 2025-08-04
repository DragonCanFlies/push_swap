/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:49:33 by latabagl          #+#    #+#             */
/*   Updated: 2025/08/04 13:53:03 by latabagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
# include "operations.h"
# include "algo.h"
# include "utils.h"

#define TRUE 1
#define FALSE 0

typedef struct  s_node
{
    int            number;
    int            index;
    struct s_node  *next;
}                   t_node;

typedef struct  s_list
{
    t_node         *head;
    int            size;
}                   t_list;

int     build_stack_a(t_list *stack_a, int argc, char **argv);
void    init_stack(t_list *stack);
int     add_node_to_stack(t_list *stack, int number);
void    print_stacks(t_list *lst_a, t_list *lst_b);
void    free_stack(t_list *stack);

int     ft_isdigit(int c);
int     ft_strcmp(const char *s1, const char *s2);
int	    is_valid_argument(char *arg);
long	my_atoi(char *arg);
int     check_and_convert(char *arg, int *is_input_valid);

#endif
