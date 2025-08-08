/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:49:33 by latabagl          #+#    #+#             */
/*   Updated: 2025/08/08 23:40:57 by latabagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

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

void	sort_2(t_list **stack_a, t_list **stack_b);
void	selection_sort(t_list **stack_a, t_list **stack_b);

void	pa(t_list *stack_a, t_list *stack_b);
void	pb(t_list *stack_a, t_list *stack_b);
void	push(t_list *stack_1, t_list *stack_2);

void    ra(t_list **stack_a);
void    rb(t_list **stack_b);
void    rr(t_list **stack_a, t_list **stack_b);
void    rotate(t_list **stack);

void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack);

void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	swap(t_list *stack);

#endif
