/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:02:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/18 05:40:32 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	len;
	t_list	*stack_a;
	t_list 	*stack_b;
	int	k;

	len = 0;
	if (argc >= 2)
	{
		len = number_of_arg(argc, argv);
		if (len >= 2)
		{
			stack_a = alloced_list(len);
			stack_b = alloced_list(len);
			create_stack_a(stack_a->stack, argc, argv);
			check_double(stack_a->stack, len);
			check_sort(stack_a,stack_b, len);
			// //k = len - 1;
			k = 3;
			// while (k < len)
			// {
			// 	printf("\n[pb %d] k(%d) \n",stack_b->stack[k],k);
			// 	k++;
			// }
			// k = stack_b->index;
			// printf("----\n");
			// while (k < len)
			// {
			// 	printf("\n[pa %d] \n",stack_a->stack[k]);
			// 	k++;
			// }
		}
		else
			write(2,"Error\n",6);
	}
	return (0);
}
