/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:51:01 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/17 22:34:31 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position_max_number(int *table, int size)
{
	int	i;
	int	k;
	int	pos;

	pos = 0;
	i = 0;
	k = table[0];
	while (i < size)
	{
		if (table[i] > k)
		{
			pos = i;
			k = table[i];
		}
		i++;
	}
	return (pos);
}

int	position_min_number(int *table, int size)
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

void	sorte_3(t_list *list, int size)
{
	int	pos_min;
	int	pos_max;

	pos_min = position_min_number(list->stack, size);
	pos_max = position_max_number(list->stack, size);
	if (pos_max == 2 && pos_min == 1)
		swap_a(list);
	else if (pos_max == 1 && pos_min == 2)
		rrotation_a(list, size);
	else if (pos_max == 0 && pos_min == 2)
	{
		rotation_a(list, size);
		swap_a(list);
	}
	else if (pos_max == 1 && pos_min == 0)
	{
		rrotation_a(list, size);
		swap_a(list);
	}
	else if (pos_max == 0 && pos_min == 1)
	{
		rrotation_a(list, size);
		rrotation_a(list, size);
	}
}
