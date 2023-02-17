/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:05:45 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/16 05:14:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_resulte(char const *str, int i)
{
	long	resulte;

	resulte = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (resulte * 10 + str[i] - 48 < resulte)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		resulte = resulte * 10 + str[i] - 48;
		i++;
	}
	return (resulte);
}

void	check_range_int(long number)
{
	if (number <= -2147483649 || number >= 2147483648)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

int	ft_atoi(char *str)
{
	int		sing;
	int		i;
	long	resulte;

	i = 0;
	sing = 1;
	resulte = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sing *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (ft_strchr(str + i, '+') || ft_strchr(str + i, '-'))
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	resulte = ft_resulte(str, i);
	if (sing < 0)
		resulte *= sing;
	check_range_int(resulte);
	return (resulte);
}
