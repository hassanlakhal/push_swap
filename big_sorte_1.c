/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorte_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:21:02 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/28 22:45:10 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pos(int content, int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		if (tab[i] == content)
			return (i);
		i++;
	}
	return (-1);
}

void	push_b_of_a(t_list *a, t_list *b, int *tab, t_data pos_d)
{
	static int	i;

	pos_d.m = position_max_number(b->stack, b->index);
	pos_d.ma = position_max_number(a->stack, a->index);
	if ((pos_d.m == b->index - 1 && !i) || pos(b->stack[b->index - 1], tab,
			pos_d.size) == pos(a->stack[a->index - 1], tab, pos_d.size) - 1)
	{
		push(b, a, 'a');
		i = 1;
	}
	else if (i && (pos(a->stack[0], tab, pos_d.size) == pos(a->stack[a->index
					- 1], tab, pos_d.size) - 1))
		rrotation(a, 'a');
	else if (i && (!pos_d.ma || b->stack[b->index - 1] > a->stack[0]))
	{
		push(b, a, 'a');
		rotation(a, 'a');
	}
	else
	{
		if (pos_d.m > (b->index / 2) + 1)
			rotation(b, 'b');
		else
			rrotation(b, 'b');
	}
}

static void	function_help(t_list *a, t_list *b, int *tab)
{
	t_data	pos_d;
	int		pos_m;

	pos_d.m = 0;
	pos_d.ma = 0;
	while (b->index)
		push_b_of_a(a, b, tab, pos_d);
	pos_m = position_max_number(a->stack, a->index);
	while (a->stack[0] != a->stack[pos_m])
	{
		rrotation(a, 'a');
		pos_m = position_max_number(a->stack, a->index);
	}
}

static void	function_help_1(t_list *list_a, t_list *list_b, t_data data,
		int tab[])
{
	while (if_exit(list_a, tab, data.start, data.end))
	{
		if (list_a->stack[list_a->index - 1] >= tab[data.start]
			&& list_a->stack[list_a->index - 1] <= tab[data.end])
		{
			push(list_a, list_b, 'b');
			if (list_b->stack[list_b->index - 1] < data.mid)
				rotation(list_b, 'b');
		}
		else
			rotation(list_a, 'a');
	}
}

void	big_sorte_1(t_list *list_a, t_list *list_b)
{
	t_data	data_1;
	int		*tab;

	tab = liste_sorte(list_a->stack, list_a->index, &data_1, 500);
	while (list_a->index != 0)
	{
		function_help_1(list_a, list_b, data_1, tab);
		data_1.start -= data_1.offset;
		data_1.end += data_1.offset;
		if (data_1.start < 0)
			data_1.start = 0;
		if (data_1.end > data_1.size)
			data_1.end = data_1.size;
	}
	function_help(list_a, list_b, tab);
	free(tab);
}
