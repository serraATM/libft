/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:29:10 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/06 15:28:33 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
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
		return (NULL);
	str[l] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (--l >= 0)
	{
		if (str[l] == '-')
			break ;
		str[l] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
// int main(int argc,char **argv)
// {
// 	if(argc < 2)
// 		return(1);
// 	printf("%s",ft_itoa(atoi(argv[1])));
// 	return(0);
// }
