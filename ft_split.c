/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:43:42 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/29 13:34:09 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	int		i;

	i = 0;
	str = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			str[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	str[i] = '\0';
	return (lst);
}
