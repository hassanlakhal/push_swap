/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:34:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/19 02:36:05 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotation(t_list *list,char c)
{
	int	k;
	int	j;
	int	*tab;

	k = 0;
	j = 1;
	if (!(list->index - 1))
		return ;
	tab = malloc(sizeof(int) * list->index);
	while (k < list->index - 1)
	{
		tab[k] = list->stack[j];
		k++;
		j++;
	}
	tab[list->index - 1] = list->stack[0];
	k = 0;
	j = 0;
	while (j < list->index)
	{
		list->stack[j] = tab[k];
		k++;
		j++;
	}
	free(tab);
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void rotation(t_list *list, char c)
{
	int	k;
	int	j;
	int	*tab;

	k = 1;
	j = 0;
	if (!(list->index - 1))
		return ;
	tab = malloc(sizeof(int) * list->index);
	j = 0;
	while (j < list->index - 1)
	{
		tab[k] = list->stack[j];
		k++;
		j++;
	}
	tab[0] = list->stack[j];
	k = 0;
	j = 0;
	while (j < list->index)
	{
		list->stack[j] = tab[k];
		k++;
		j++;
	}
	free(tab);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}
