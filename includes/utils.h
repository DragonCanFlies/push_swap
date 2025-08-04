/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:50:33 by latabagl          #+#    #+#             */
/*   Updated: 2025/08/04 13:52:54 by latabagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "push_swap.h"

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