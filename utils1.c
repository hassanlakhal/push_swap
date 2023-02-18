/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:32:47 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/18 05:26:46 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*alloced_list(int size)
{
	t_list	*list;

	list = ft_calloc(sizeof(t_list),1);
	list->stack =ft_calloc(sizeof(int) , size);
	return (list);
}

void	create_stack_b(t_list *stack_b, int size)
{
	stack_b = alloced_list(size);
}
