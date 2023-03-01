/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:00:04 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 17:02:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a(t_list *stack_a)
{
	int	temp;

	if (!(stack_a->index - 1))
		return ;
	temp = stack_a->stack[stack_a->index - 2];
	stack_a->stack[stack_a->index - 2] = stack_a->stack[stack_a->index - 1];
	stack_a->stack[stack_a->index - 1] = temp;
}

void	swap_b(t_list *stack_b)
{
	int	temp;

	if (!(stack_b->index - 1))
		return ;
	temp = stack_b->stack[stack_b->index - 2];
	stack_b->stack[stack_b->index - 2] = stack_b->stack[stack_b->index - 1];
	stack_b->stack[stack_b->index - 1] = temp;
}
