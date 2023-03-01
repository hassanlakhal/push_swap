/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:34:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 17:02:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	rrotation(t_list *list)
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
}

void	rotation(t_list *list)
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
}
