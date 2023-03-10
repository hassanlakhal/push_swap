/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorte.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:06:15 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/28 20:16:18 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_exit(t_list *a, int table[], int start, int end)
{
	int	i;
	int	j;

	i = 0;
	j = a->index;
	while (j > i)
	{
		if (table[start] <= a->stack[i] && table[end] >= a->stack[i])
			return (1);
		i++;
	}
	return (0);
}

void	function_help(t_list *list_a, t_list *list_b)
{
	int	pos_max;

	pos_max = position_max_number(list_b->stack, list_b->index);
	while (list_b->index != 0)
	{
		pos_max = position_max_number(list_b->stack, list_b->index);
		if (pos_max > (list_b->index / 2) + 1)
		{
			if (pos_max == list_b->index - 1)
				push(list_b, list_a, 'a');
			else
				rotation(list_b, 'b');
		}
		else
		{
			if (pos_max == list_b->index - 1)
				push(list_b, list_a, 'a');
			else
				rrotation(list_b, 'b');
		}
	}
}

void	function_help_1(t_list *list_a, t_list *list_b, t_data *data, int tab[])
{
	while (if_exit(list_a, tab, data->start, data->end))
	{
		if (list_a->stack[list_a->index - 1] >= tab[data->start]
			&& list_a->stack[list_a->index - 1] <= tab[data->end])
		{
			push(list_a, list_b, 'b');
			if (list_b->stack[list_b->index - 1] < data->mid)
				rotation(list_b, 'b');
		}
		else
			rotation(list_a, 'a');
	}
}

void	big_sorte(t_list *list_a, t_list *list_b)
{
	t_data	data;
	int		*tab;

	tab = liste_sorte(list_a->stack, list_a->index, &data, 100);
	while (list_a->index != 0)
	{
		function_help_1(list_a, list_b, &data, tab);
		data.start -= data.offset;
		data.end += data.offset;
		if (data.start < 0)
			data.start = 0;
		if (data.end > data.size)
			data.end = data.size;
	}
	function_help(list_a, list_b);
	free(tab);
}
