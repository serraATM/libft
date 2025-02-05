/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:39:52 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/05 16:49:17 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (0);
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	d = (char *)malloc((len + 1) * sizeof(char));
	if (!d)
		return (0);
	ft_strlcpy(d, s + start, len);
	return (d);
}
