/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:16:56 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 17:04:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS
# define PUSH_SWAP_BONUS
# include "./get_next_line/get_next_line.h"
# include "../libft/libft.h"
typedef struct t_list_stack_a
{
	int	*stack;
	int	index;
}		t_list;
void	swap_a(t_list *stack_a);
void	swap_b(t_list *stack_b);
void	push(t_list *stack_a, t_list *stack_b);
void	rrotation(t_list *list);
void	rotation(t_list *list);
void	check_sort(t_list *tableu);
int		number_of_arg(int cont, char **str);
void	check_string(char *str);
int		*convert_int(int *tableu, int argc, char *argv[], int k);
t_list	*alloced_list(int size);
void	dispaly_error(void);
void	free_list(t_list *list);
#endif
