/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorte_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:39:53 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/23 00:30:14 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

int	pivot(int table[], int low, int high)
{
	int	t_pivot;
	int	i;
	int	j;

	t_pivot = table[high];
	i = low - 1;
	j = low;
	while (j <= high)
	{
		if (table[j] < t_pivot)
		{
			i++;
			swap(&table[i], &table[j]);
		}
		j++;
	}
	swap(&table[i + 1], &table[high]);
	return (i + 1);
}

void	quick_sorte(int *table, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = pivot(table, low, high);
		quick_sorte(table, low, pi - 1);
		quick_sorte(table, pi + 1, high);
	}
}

int	*liste_sorte(int *list, int size)
{
	int	*table;
	int	i;

	table = malloc(sizeof(int) * size);
	i = size;
	while (i >= 0)
	{
		table[i] = list[i];
		i--;
	}
	quick_sorte(table, 0, size - 1);
	return (table);
}
