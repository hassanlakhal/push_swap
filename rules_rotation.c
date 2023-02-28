/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:34:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/28 17:23:34 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remlire(t_list *list, int *tab)
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (j < list->index)
	{
		list->stack[j] = tab[k];
		k++;
		j++;
	}
	free(tab);
}

void	rrotation(t_list *list, char c)
{
	int	k;
	int	j;
	int	*tab;

	k = 0;
	j = 1;
	if (!(list->index - 1))
		return ;
	tab = malloc(sizeof(int) * list->index);
	if (!tab)
		return ;
	while (k < list->index - 1)
	{
		tab[k] = list->stack[j];
		k++;
		j++;
	}
	tab[list->index - 1] = list->stack[0];
	remlire(list, tab);
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	rotation(t_list *list, char c)
{
	int	k;
	int	j;
	int	*tab;

	k = 1;
	j = 0;
	if (!(list->index - 1))
		return ;
	tab = malloc(sizeof(int) * list->index);
	if (!tab)
		return ;
	j = 0;
	while (j < list->index - 1)
	{
		tab[k] = list->stack[j];
		k++;
		j++;
	}
	tab[0] = list->stack[j];
	remlire(list, tab);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}
