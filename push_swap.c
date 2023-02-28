/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:02:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/28 20:40:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_double(int *tableu, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tableu[i] == tableu[j])
				dispaly_error();
			j++;
		}
		i++;
	}
}

void	free_list(t_list *list)
{
	free(list->stack);
	free(list);
}

int	main(int argc, char *argv[])
{
	int		len;
	t_list	*stack_a;
	t_list	*stack_b;

	len = 0;
	stack_a = NULL;
	if (argc >= 2)
	{
		len = number_of_arg(argc, argv);
		if (len >= 2)
		{
			stack_a = alloced_list(len);
			stack_b = alloced_list(len);
			stack_a->index = len;
			convert_int(stack_a->stack, argc, argv, len);
			check_double(stack_a->stack, len);
			check_sort(stack_a, stack_b);
			free_list(stack_a);
			free_list(stack_b);
		}
		else
			write(2, "Error\n", 6);
	}
	return (0);
}
