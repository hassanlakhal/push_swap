/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:28:43 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/18 05:33:59 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list *stack_a, t_list *stack_b)
{
	static int top;
	if (!stack_b->index)
		return ;
	stack_b->stack[--stack_b->index] = stack_a->stack[top++];
	stack_b->top = top;
	write(1,"pb\n",3);
}

void	push_a(t_list *stack_a, t_list *stack_b)
{

	if (!stack_b->index)
		return ;
	stack_a->stack[--stack_b->index] = stack_b->stack[stack_b->top++];
	write(1,"pa\n",3);
}
