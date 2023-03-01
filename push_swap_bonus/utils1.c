/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:32:47 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 17:02:27 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	*alloced_list(int size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->stack = malloc(sizeof(int) * size);
	if (!list->stack)
		return (0);
	list->index = 0;
	return (list);
}

void	dispaly_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	free_list(t_list *list)
{
	free(list->stack);
	free(list);
}
