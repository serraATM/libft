/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:46:39 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/05 16:06:13 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || ((c >= 'A' && c <= 'Z') || ((c >= '0')
				&& (c <= '9'))))
	{
		return (1);
	}
	return (0);
}
