/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:51:01 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/19 15:09:48 by hlakhal-         ###   ########.fr       */
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

void	rotation_swap(t_list *a)
{
	rotation(a, 'a');
	swap_a(a);
}

void	sorte_3(t_list *list, int size)
{
	int	pos_min;
	int	pos_max;

	pos_min = position_min_number(list->stack, size);
	pos_max = position_max_number(list->stack, size);
	if (pos_max == 2 && pos_min == 1)
		rotation(list, 'a');
	else if (pos_max == 1 && pos_min == 2)
	{
		rrotation(list, 'a');
		swap_a(list);
	}
	else if (pos_max == 0 && pos_min == 2)
		rotation_swap(list);
	else if (pos_max == 1 && pos_min == 0)
		rrotation(list, 'a');
	else if (pos_max == 0 && pos_min == 1)
		swap_a(list);
	else if (pos_max == 2 && pos_min == 0)
		rotation_swap(list);
}
