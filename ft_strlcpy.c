/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:01:49 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/05 16:20:16 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	cont;

	cont = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[cont] && cont < size - 1)
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (ft_strlen(src));
}
