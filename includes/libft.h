/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:02:26 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/17 17:22:53 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

# define MAX_LONG		9223372036854775807

int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_numlen(long n);
int		ft_numlen_base(unsigned long n, int base);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned long n, char *base);
char	*ft_itoa_base(char *str, unsigned long n, int base, int c);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
char	*ft_uitoa(unsigned int nb);
void	ft_putnbr(int n);

#endif
