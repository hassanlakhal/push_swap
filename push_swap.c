/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:02:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/17 22:31:25 by hlakhal-         ###   ########.fr       */
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
	t_list	*tableu;
	int	k;

	len = 0;
	if (argc >= 2)
	{
		len = number_of_arg(argc, argv);
		if (len >= 2)
		{
			tableu = alloced_list(len);
			convert_int(tableu->stack, argc, argv);
			check_double(tableu->stack, len);
			check_sort(tableu, len);
			//k = len - 1;
			k = 0;
			while (k < len)
			{
				printf(" %d ",tableu->stack[k]);
				k++;
			}
		}
		else
			write(2,"Error\n",6);
	}
	return (0);
}
