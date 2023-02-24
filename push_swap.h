/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:58:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/24 01:52:41 by hlakhal-         ###   ########.fr       */
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
	int	index;
}		t_list;
typedef struct intfo
{
	int	start;
	int	end;
	int	mid;
	int	offset;
	int	size;
}t_data;

void	check_sort(t_list *tableu, t_list *stack_b);
int		number_of_arg(int cont, char **str);
void	check_string(char *str);
int		*convert_int(int *tableu, int argc, char *argv[],int k);
t_list	*alloced_list(int size);
void	swap_a(t_list *stack_a);
void	swap_b(t_list *stack_b);
void	rotation(t_list *stack_a,char c);
void rrotation(t_list *list,char c);
void sorte_3(t_list *list,int size);
void	push(t_list *stack_a, t_list *stack_b,char c);
void sorte_4(t_list *list_a,t_list *list_b);
void sorte_5(t_list *list_a,t_list *list_b);
void big_sorte(t_list *list_a, t_list *list_b);
int	*liste_sorte(int *list, int size, t_data *data);
#endif
