/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:00:26 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 17:40:56 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_count(char const *s, char c)
{
	int					i;
	int					k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != (const char)c)
		{
			k++;
			while (s[i] != (const char)c)
			{
				if (s[i] == '\0')
					return (k);
				i++;
			}
		}
		else
			i++;
	}
	return (k);
}

static unsigned int		ft_start(char const *s, char c, unsigned int start)
{
	while (s[start] == (const char)c)
	{
		start++;
	}
	return (start);
}

static size_t			ft_end(char const *s, char c, unsigned int start)
{
	while (s[start] != (const char)c)
	{
		if (s[start] == '\0')
			return (start);
		start++;
	}
	return (start);
}

char					**ft_strsplit(char const *s, char c)
{
	unsigned int		start;
	unsigned int		end;
	char				**dest;
	int					count;

	count = 0;
	if (!s)
		return (NULL);
	dest = (char**)malloc(sizeof(*dest) * ft_count(s, c) + 1);
	if (dest == NULL)
		return (NULL);
	start = ft_start(s, c, count);
	end = ft_end(s, c, start);
	while (count < ft_count(s, c))
	{
		dest[count] = ft_strsub(s, start, end - (size_t)start);
		if (dest[count] == NULL)
			return (NULL);
		start = ft_start(s, c, end);
		end = ft_end(s, c, start);
		count++;
	}
	dest[count] = NULL;
	return (dest);
}
