/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/03/01 21:00:08 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
	if (!j && !stack_b->index)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
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
		free_result(arg);
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
			dispaly_error();
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
			dispaly_error();
		j = 0;
		while (str[j])
		{
			check_string(str[j]);
			tableu[k - 1] = ft_atoi(str[j]);
			k--;
			j++;
		}
		free_result(str);
		i++;
	}
	return (tableu);
}
