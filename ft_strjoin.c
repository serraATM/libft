/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:50:18 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/22 16:54:47 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*sf;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		sf = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (sf == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			sf[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			sf[len1] = s2[i];
			len1++;
		}
		sf[len1] = '\0';
		return (sf);
	}
	return (NULL);
}
