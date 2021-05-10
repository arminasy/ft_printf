/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arminasy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:25:08 by arminasy          #+#    #+#             */
/*   Updated: 2021/02/20 18:39:24 by arminasy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t b_i;
	size_t l_i;
	size_t l_s;

	b_i = 0;
	l_s = ft_strlen((char *)little);
	if (little[0] == '\0')
		return (char *)big;
	while (big[b_i] != '\0' && len > l_s - 1)
	{
		l_i = 0;
		while (little[l_i] == big[b_i + l_i])
		{
			++l_i;
			if (little[l_i] == '\0')
				return ((char *)big + b_i);
		}
		--len;
		++b_i;
	}
	return (NULL);
}
