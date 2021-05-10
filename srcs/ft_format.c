/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:16:23 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/10 14:16:24 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int     ft_eval_varibale(t_print *tab, const char *format, int pos)
{
    if(format[pos] == 'c')
        ft_output_char(tab);
    else if (format[pos] == 's')
        ft_output_string(tab);
    else if (format[pos] == 'd' || format[pos] == 'i')
        ft_output_int(tab);
    else if (format[pos] == 'u')
        ft_output_unsigned_int(tab);
    else if (format[pos] == 'p')
        ft_output_pointer(tab);
    else if (format[pos] == 'x' || format[pos] == 'X')
        ft_output_hexa_int(tab, format[pos] - 23);
    else if(format[pos] == '%')
        ft_percentage(tab);
    return (pos);
}
