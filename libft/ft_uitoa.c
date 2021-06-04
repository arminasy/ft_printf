/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:28:37 by arminasy          #+#    #+#             */
/*   Updated: 2021/05/17 19:43:43 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int nb)
{
	char	*a;
	int		l;

	l = ft_numlen(nb);
	a = (char *)malloc(sizeof(char) * (l + 1));
	if (!a)
		return (NULL);
	a[l--] = '\0';
	if (nb == 0)
		a[l] = 0 + '0';
	while (nb > 0)
	{
		a[l--] = nb % 10 + '0';
		nb /= 10;
	}
	return (a);
}
