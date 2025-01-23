/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulserr <raulserr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:39:52 by raulserr          #+#    #+#             */
/*   Updated: 2025/01/22 13:36:39 by raulserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (!s)
		return (0);
	if ((start + len) > strlen(s))
		len = strlen(s) - start;
	d = (char*)malloc((len + 1) * sizeof(char));
	if (!d)
		return (0);
	strncpy(d, s + start, len);;
	return d;
}

int main()
{
const char *text = "hola mundo";
int i = 5;
int l = 3;
char *res = ft_substr(text, i, l);
if (res != NULL)
{
	printf("resultado: %s\n", res);
	free(res);
}
else
	printf("error");
return (0);
}
