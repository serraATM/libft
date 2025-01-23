/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:31:04 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/15 11:31:50 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'a' || str[cont] > 'z')
			&& (str[cont] < 'A' || str[cont] > 'Z'))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
