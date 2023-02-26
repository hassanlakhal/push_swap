/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorte_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:39:53 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/26 16:43:57 by hlakhal-         ###   ########.fr       */
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

int	*liste_sorte(int *list, int size, t_data *data, int arg)
{
	int	*table;
	int	i;

	data->start = 0;
	data->end = 0;
	if (arg == 100)
		data->offset = (size) / 5;
	else if (arg == 500)
		data->offset = (size) / 11;
	data->mid = (((size)) / 2) + 1;
	data->start = data->mid - data->offset;
	data->end = data->mid + data->offset;
	data->size = size - 1;
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
