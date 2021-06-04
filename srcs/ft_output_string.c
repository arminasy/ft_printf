/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:20:19 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/17 19:56:04 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	ft_write_point(t_print *tab)
{
	ft_update_tab_string(NULL, tab, 0);
	while (tab->wdt--)
		tab->tl += write(1, " ", 1);
}

void	ft_output_string(t_print *tab)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = 0;
	s = va_arg(tab->args, char *);
	if (!s)
		s = "(null)";
	if (s && tab->pnt == 1 && tab->prc == 0)
		return (ft_write_point(tab));
	len = ft_update_tab_string(s, tab, len);
	if (!tab->dash && tab->wdt > len)
		ft_right_cs(tab, len);
	if (tab->prc > 0)
		while (s[i] && tab->prc--)
			tab->tl += write(1, &s[i++], 1);
	else
		while (s[i])
			tab->tl += write(1, &s[i++], 1);
	if (s && tab->dash && tab->wdt)
		ft_left_cs(tab, len);
}
