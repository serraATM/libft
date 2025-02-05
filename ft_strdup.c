/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:25:42 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/21 17:07:07 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int i = 0;
	char *res;

	while(s[i])
		i++;
	res = (char*)malloc(sizeof(*res) * i + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		res[i]=s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
