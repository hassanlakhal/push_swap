/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:12:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/22 00:06:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	position_min_number(int *table, int size)
{
	int	i;
	int	k;
	int	pos;

	pos = 0;
	i = 0;
	k = table[size];
	while (size >= 0)
	{
		if (table[size] < k)
		{
			pos = size;
			k = table[size];
		}
		size--;
	}
	return (pos);
}

void	sorte_5(t_list *list_a, t_list *list_b)
{
	int	i;
	int	mid;

	mid = list_a->index / 2;
	i = position_min_number(list_a->stack, list_a->index);
	if (i <= mid)
	{
		while (i < list_a->index - 1)
		{
			rrotation(list_a, 'a');
			i = position_min_number(list_a->stack, list_a->index);
		}
		push(list_a, list_b, 'b');
		check_sort(list_a, list_b);
		push(list_b, list_a, 'a');
	}
	else if (i > mid)
	{
		if (mid + 1 == i)
			swap_a(list_a);
		push(list_a, list_b, 'b');
		check_sort(list_a, list_b);
		push(list_b, list_a, 'a');
	}
}
