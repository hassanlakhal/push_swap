/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/26 15:47:01 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_list *tableu, t_list *stack_b)
{
	if (tableu->index == 2)
		swap_a(tableu);
	else if (tableu->index == 3)
		sorte_3(tableu, tableu->index);
	else if (tableu->index == 4)
		sorte_4(tableu, stack_b);
	else if (tableu->index == 5)
		sorte_5(tableu, stack_b);
	else if (tableu->index >= 6 && tableu->index <= 100)
		big_sorte(tableu, stack_b);
	else if (tableu->index >= 6 && tableu->index <= 500)
		big_sorte_1(tableu, stack_b);
}

void	check_sort(t_list *tableu, t_list *stack_b)
{
	int	i;
	int	j;

	i = tableu->index - 1;
	j = 1;
	while (i > 0)
	{
		if (tableu->stack[i] < tableu->stack[i - 1])
			j = 0;
		else
		{
			j = 1;
			break ;
		}
		i--;
	}
	if (!j)
		return ;
	else
		sort_stack(tableu,stack_b);
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

int	*convert_int(int *tableu, int argc, char *argv[], int k)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	j = 0;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (!str[0])
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		j = 0;
		while (str[j])
		{
			check_string(str[j]);
			tableu[k - 1] = ft_atoi(str[j]);
			k--;
			j++;
		}
		i++;
	}
	return (tableu);
}
