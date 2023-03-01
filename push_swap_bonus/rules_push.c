/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:28:43 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 17:01:46 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a->index)
		return ;
	stack_b->stack[stack_b->index++] = stack_a->stack[--stack_a->index];
}
