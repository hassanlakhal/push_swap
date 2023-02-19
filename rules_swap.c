/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:00:04 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/19 00:43:34 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void swap_a(t_list *stack_a)
{
	int temp;
	temp = stack_a->stack[stack_a->index - 2];
	stack_a->stack[stack_a->index - 2] = stack_a->stack[stack_a->index - 1];
	stack_a->stack[stack_a->index - 1] = temp;
	write(1,"sa\n",3);
}

void swap_b(t_list *stack_b)
{
	int temp;
	temp = stack_b->stack[stack_b->index - 2];
	stack_b->stack[stack_b->index - 2] = stack_b->stack[stack_b->index - 1];
	stack_b->stack[stack_b->index - 1] = temp;
	write(1,"sb\n",3);
}
