/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:01:49 by raulserr          #+#    #+#             */
/*   Updated: 2024/11/19 19:51:34 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	name;

	cont = 0;
	name = 0;
	while (src[name])
		name++;
	if (size < 1)
		return (name);
	while (src[name] && name < size - 1)
	{
		dest[name] = src[name];
		cont++;
	}
	dest[cont] = '\0';
	return (name);
}
