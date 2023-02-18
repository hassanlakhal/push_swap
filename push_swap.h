/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:58:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/18 05:02:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct t_list_stack_a
{
	int	*stack;
	int top;
	int	index;
}		t_list;
void	check_sort(t_list *tableu, t_list *stack_b, int a);
int		number_of_arg(int cont, char **str);
void	check_string(char *str);
int		*create_stack_a(int *tableu, int argc, char *argv[]);
t_list	*alloced_list(int size);
void	swap_a(t_list *stack_a);
void	swap_b(t_list *stack_b);
void	rotation_a(t_list *stack_a, int size);
void	rrotation_a(t_list *stack_a, int size);
void	sorte_3(t_list *list, int size);
void	push_b(t_list *stack_a, t_list *stack_b);
void	push_a(t_list *stack_a, t_list *stack_b);
#endif
