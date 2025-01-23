/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:18:58 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/16 15:57:49 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	while (i < n)
	{
		*p = unsigned char c;
		i++;
	}
}
