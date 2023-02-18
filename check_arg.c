/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/18 05:36:49 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_sort(t_list *tableu,t_list *stack_b, int a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	stack_b->index = a;
	while (i < a - 1)
	{
		if (tableu->stack[i] < tableu->stack[i + 1])
			j = 0;
		else
		{
			j = 1;
			break ;
		}
		i++;
	}
	if (!j)
		return ;
	else
	{
		if (a == 2)
			swap_a(tableu);
		else if (a == 3)
			sorte_3(tableu,a);
		else if (a == 4)
		{
			swap_a(tableu);
			push_b(tableu,stack_b);
			push_b(tableu,stack_b);
			push_b(tableu,stack_b);
			push_a(tableu,stack_b);
			push_a(tableu,stack_b);
			push_a(tableu,stack_b);
		}

	}
}

int	number_of_arg(int cont, char **str)
{
	int		i;
	int		b;
	char	**arg;
	int		len;

	len = 0;
	i = 1;
	b = 0;
	while (i < cont)
	{
		b = 0;
		arg = ft_split(str[i], ' ');
		while (arg[b])
			b++;
		len += b;
		i++;
	}
	return (len);
}

void	check_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!ft_isdigit(str[i]))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

int	*create_stack_a(int *tableu, int argc, char *argv[])
{
	int		i;
	int		j;
	char	**str;
	int k;
	k = 0;

	i = 1;
	j = 0;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (!str[0])
		{
			write(2,"Error\n",6);
			exit(0);
		}
		j = 0;
		while (str[j])
		{
			check_string(str[j]);
			tableu[k] = ft_atoi(str[j]);
			k++;
			j++;
		}
		i++;
	}
	return (tableu);
}
