/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:39:48 by raulserr          #+#    #+#             */
/*   Updated: 2024/11/25 18:26:56 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n && (s1[cont] != '\0' && s2[cont] != '\0'))
	{
		if (s1[cont] != s2[cont])
			return (s1[cont] - s2[cont]);
		cont++;
	}
	if (cont < n)
		return (s1[cont] - s2[cont]);
	return (0);
}
