/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:46:01 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/18 15:41:55 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

static int	check_overflow(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long long int	n;
	int						i;
	int						sign;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = check_sign(str[i++]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (n >= MAX_LONG)
		{
			n = check_overflow(sign);
			break ;
		}
		n = n * 10 + (str[i++] - '0');
	}
	return (sign * (int)n);
}
