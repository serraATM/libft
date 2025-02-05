/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:06:51 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/05 13:48:14 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		chr;
	size_t				i;

	i = 0;
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (*str == chr)
			return (str);
		i++;
		str++;
	}
	return (0);
}
