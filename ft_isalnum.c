/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:46:39 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/15 11:49:21 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'a' || str[cont] > 'z')
			&& (str[cont] < 'A' || str[cont] > 'Z')
			&& (str[cont] < '0') || (str[cont] > '9'))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
