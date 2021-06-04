/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:16:02 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/18 15:35:39 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	ft_check_precision(t_print *tab)
{
	if (tab->prc == 0 && tab->zero == 1)
	{
		tab->zero = 0;
		tab->perc = 1;
	}
	if (tab->prc < 0)
	{
		tab->prc = 0;
		tab->pnt = 0;
	}
}

void	ft_check_width(t_print *tab)
{
	if (tab->wdt < 0)
	{
		tab->wdt *= -1;
		tab->dash = 1;
		tab->zero = 0;
	}
}

int		ft_check_sign(t_print *tab, int j)
{
	tab->sign = 1;
	tab->sp = 0;
	return (j * -1);
}

int		ft_check_flag(char c)
{
	if (c == '-' || c == '.')
		return (1);
	return (0);
}
