/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 06:51:37 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/21 08:03:16 by hlakhal-         ###   ########.fr       */
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
	k = table[0];
	while (i < size)
	{
		if (table[i] < k)
		{
			pos = i;
			k = table[i];
		}
		i++;
	}
	return (pos);
}

void	sorte_help(t_list *a, t_list *b)
{
	push(a, b, 'b');
	check_sort(a, b);
	push(b, a, 'a');
}

void	sorte_4(t_list *list_a, t_list *list_b)
{
	int	min;

	min = position_min_number(list_a->stack, list_a->index);
	if (min == 3)
		sorte_help(list_a, list_b);
	else if (min == 2)
	{
		swap_a(list_a);
		sorte_help(list_a, list_b);
	}
	else if (min == 1)
	{
		rotation(list_a, 'a');
		rotation(list_a, 'a');
		sorte_help(list_a, list_b);
	}
	else if (min == 0)
	{
		rrotation(list_a, 'a');
		sorte_help(list_a, list_b);
	}
}
