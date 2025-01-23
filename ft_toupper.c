/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:31:43 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/17 16:33:25 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_toupper(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
			str[cont] -= 32;
		cont++;
	}
	return (str);
}
