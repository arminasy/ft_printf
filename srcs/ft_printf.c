/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:59:12 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/06 17:45:48 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_print *ft_reset_tab(t_print *tab)
{
    tab->wdt = 0;
    tab->prc = 0;
    tab->zero = 0;
    tab->pnt = 0;
    tab->sign = 0;
    tab->is_zero = 0;
    tab->dash = 0;
    tab->perc = 0;
    tab->sp = 0;
    return (tab);
}

t_print *ft_initialise_tab(t_print *tab)
{
    tab->wdt = 0;//width
    tab->prc = 0;//precision
    tab->zero = 0;//zero padding
    tab->pnt = 0; //.
    tab->sign = 0; // positive or negative number
    tab->tl = 0; //total length(return value)
    tab->is_zero = 0; //is number 0
    tab->dash = 0;//-
    tab->perc = 0;// %
    tab->sp = 0;//space flag ' '
    return (tab);
}

int     ft_printf(const char *format, ...)
{
    t_print     *tab;
    int         i;
    int         r;

    if(!format)
        return (0);
    r = 0;
    tab = (t_print *)malloc(sizeof(t_print));
    if (!tab);
        return (-1);
    ft_initialise_tab(tab);
    i = -1;
    va_start(tab->args, format)
    while (format[++i])
    {
        if (format[i] == '%')
            i = ft_eval_format(tab, format, i + 1);
        else
            r+= write(1, &format[i], 1);
    }
    r += tab->tl;
    va_end(tab->args);
    free(tab);
    return (r);
}