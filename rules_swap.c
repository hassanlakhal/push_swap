/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:00:04 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/17 01:32:33 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void swap_a(t_list *stack_a)
{
	int temp;
	temp = stack_a->stack[0];
	stack_a->stack[0] = stack_a->stack[1];
	stack_a->stack[1] = temp;
	write(1,"sa\n",3);
}

void swap_b(t_list *stack_b)
{
	int temp;
	temp = stack_b->stack[0];
	stack_b->stack[0] = stack_b->stack[1];
	stack_b->stack[1] = temp;
	write(1,"sb\n",3);
}
