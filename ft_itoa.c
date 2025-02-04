/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:10 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/04 13:32:07 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stlib.h>

static int	lenght(int n)
{
	int	i;

	i = 1;
	while (n)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*str;
	long	num;

	num = n;
	l = lenght(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	str[l] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (l-- > 0)
	{
		if (str[l] == '-')
			break ;
		str[l] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
