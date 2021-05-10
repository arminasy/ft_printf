/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:42:35 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/06 17:49:21 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIB_H
#define LIB_H

#include "../Printf/libft/libft.h"
#include <stdarg.h>

typedef struct  s_print
{
    va_list     args;   // arg to print out
    int         wdt;    //width
    int         prc;    //precision
    int         zero;   //zero padding
    int         dot;    //.
    int         dash;   //-
    int         tl;     //total-length (return value)
    int         sign;   //positive or negative number
    int         is_zero;//is number zero
    int         perc    //%
    int         sp;     //spec flag ' '
}               t_print;

#endif

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_itoa(int n);
int		ft_atoi(char *str);

#endif
