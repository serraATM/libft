/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:49:16 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/17 16:30:43 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (dst[i] && i < size)
		i++;
	l = i;
	while (src[i - l] && i + 1 < size)
	{
		dst[i] = src[i - n];
		i++;
	}
	if (l < size)
		dst[i] = '\0';
	return (l + ft_strlen(src));
}
