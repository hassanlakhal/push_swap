/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:28:43 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/19 01:36:03 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list *stack_a, t_list *stack_b, char c)
{
	if (!stack_a->index)
		return ;
	stack_b->stack[stack_b->index++] = stack_a->stack[--stack_a->index];
	if (c == 'b')
		write(1, "pb\n", 3);
	else if (c == 'a')
		write(1, "pa\n", 3);
}
