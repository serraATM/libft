/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:43:42 by raulserr          #+#    #+#             */
/*   Updated: 2025/02/06 13:57:28 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
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

static void	ft_free(char **str, int i)
{
	while (i >= 0)
		free(str[i--]);
	free(str);
}

static char	*ft_next_word(char const **s, char c)
{
	size_t	len;
	char	*next;
	char	*word;

	while (**s == c)
		(*s)++;
	if (!**s)
		return (NULL);
	next = ft_strchr(*s, c);
	if (next)
		len = next - *s;
	else
		len = ft_strlen(*s);
	word = ft_substr(*s, 0, len);
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count(s, c);
	str = (char **)malloc((words + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (i < words)
	{
		str[i] = ft_next_word(&s, c);
		if (!str[i])
		{
			ft_free(str, i - 1);
			return (NULL);
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// char	**ft_split(char const *s, char c);
// void	ft_free(char **str, int i);

// int	main(void)
// {
// 	char	**result;
// 	int		i;
// 	char	*test_str = "Hola  mundo  esto  es  un test ";

// 	printf("Probando ft_split...\n");

// 	result = ft_split(test_str, ' ');

// 	if (!result)
// 	{
// 		printf("Error: ft_split devolvió NULL\n");
// 		return (1);
// 	}

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("Palabra %d: \"%s\"\n", i, result[i]);
// 		i++;
// 	}

// 	ft_free(result, i - 1);

// 	printf("Prueba completada sin fugas de memoria.\n");
// 	return (0);
// }
