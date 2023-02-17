/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:32:47 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/17 00:26:14 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*alloced_list(int size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	list->stack = malloc(sizeof(int) * size);
	return (list);
}
