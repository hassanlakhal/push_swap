/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorte.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:06:15 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/23 13:11:31 by hlakhal-         ###   ########.fr       */
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
void	afficage(int *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		printf("%d --> [%d] ", tab[i], i);
		i++;
	}
}
void	big_sorte(t_list *list_a, t_list *list_b)
{
	int	*tab;
	int	start;
	int	end;
	int	mid;
	int	offset;
	int	size;

	start = 0;
	end = 0;
	tab = liste_sorte(list_a->stack, list_a->index);
	offset = (list_a->index) / 5;
	mid = (((list_a->index)) / 2) + 1;
	start = mid - offset;
	end = mid + offset;
	size = list_a->index - 1;
	while (list_a->index != 0)
	{
		while (if_exit(list_a, tab, start, end))
		{
			if (list_a->stack[list_a->index - 1] >= tab[start]
				&& list_a->stack[list_a->index - 1] <= tab[end])
					push(list_a, list_b, 'b');
			else
				rotation(list_a, 'a');
		}
		start -= offset;
		end += offset;
		if (start < 0)
			start = 0;
		if (end > size)
			end = size;
	}
}
