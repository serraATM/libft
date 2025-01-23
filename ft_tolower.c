/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:34:02 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/17 16:34:40 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tolower(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
			str[cont] += 32;
		cont++;
	}
	return (str);
}
