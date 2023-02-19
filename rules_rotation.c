/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:34:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/18 23:32:19 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotation_a(t_list *stack_a, int size)
{
	int	k;
	int	j;
	int	*tab;

	k = 0;
	j = 1;
	tab = malloc(sizeof(int) * size);
	while (k < size - 1)
	{
		tab[k] = stack_a->stack[j];
		k++;
		j++;
	}
	tab[size - 1] = stack_a->stack[0];
	k = 0;
	j = 0;
	while (j < size)
	{
		stack_a->stack[j] = tab[k];
		k++;
		j++;
	}
	free(tab);
	write(1, "rra\n", 4);
}

void rotation_a(t_list *stack_a, int size)
{
	int	k;
	int	j;
	int	*tab;

	k = 1;
	j = 0;
	tab = malloc(sizeof(int) * size);
	j = 0;
	while (j < size - 1)
	{
		tab[k] = stack_a->stack[j];
		k++;
		j++;
	}
	tab[0] = stack_a->stack[j];
	k = 0;
	j = 0;
	while (j < size)
	{
		stack_a->stack[j] = tab[k];
		k++;
		j++;
	}
	free(tab);
	write(1,"ra\n",3);
}
