/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:16:31 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 18:29:17 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	check_output(t_list *stack_a, t_list *stack_b)
{
	char	*a;

	a = get_next_line(0);
	while (a != NULL)
	{
		if (!ft_strncmp(a, "sa\n", ft_strlen(a)))
			swap_a(stack_a);
		else if (!ft_strncmp(a, "pa\n", ft_strlen(a)))
			push(stack_b, stack_a);
		else if (!ft_strncmp(a, "sb\n", ft_strlen(a)))
			swap_b(stack_b);
		else if (!ft_strncmp(a, "pb\n", ft_strlen(a)))
			push(stack_a, stack_b);
		else if (!ft_strncmp(a, "ra\n", ft_strlen(a)))
			rotation(stack_a);
		else if (!ft_strncmp(a, "rra\n", ft_strlen(a)))
			rrotation(stack_a);
		else if (!ft_strncmp(a, "rb\n", ft_strlen(a)))
			rotation(stack_b);
		else if (!ft_strncmp(a, "rrb\n", ft_strlen(a)))
			rrotation(stack_b);
		free(a);
		a = get_next_line(0);
	}
	free(a);
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
			check_output(stack_a, stack_b);
			check_sort(stack_a);
			free_list(stack_a);
			free_list(stack_b);
		}
		else
			write(2, "Error\n", 6);
	}
	return (0);
}
