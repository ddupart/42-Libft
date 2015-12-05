/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:10:02 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/02 19:29:09 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_check(const char *str)
{
	int					i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit((int)str[i]) || str[i] == '-' || str[i] == '+')
			return (1);
		if ((str[i] >= '!' && str[i] <= '*') || str[i] == ',')
			return (0);
		if ((str[i] >= ':' && str[i] <= '~') || str[i] == '.' || str[i] == '/')
			return (0);
		if (str[i] == '\200')
			return (0);
		i++;
	}
	return (0);
}

static char				*ft_getnumber(const char *str)
{
	size_t				i;
	unsigned int		j;

	i = 0;
	while (str[i])
	{
		j = (unsigned int)i;
		if (str[i] == '-' || str[i] == '+' || ft_isdigit((int)str[i]))
		{
			while (ft_isdigit((int)str[i + 1]) && str[i] != '\0')
				i++;
			if (str[j] == '-' || ft_isdigit((int)str[j]))
				return (ft_strsub(str, j, i - j + 1));
			if (str[j] == '+')
				return (ft_strsub(str, j + 1, i - j));
		}
		if (ft_check(str) == 0)
			return (ft_strnew(0));
		i++;
	}
	return (ft_strnew(0));
}

int						ft_atoi(const char *str)
{
	int					pow;
	int					res;
	size_t				i;
	size_t				j;
	char				*dst;

	if (!str)
		return (0);
	i = 0;
	res = 0;
	pow = 1;
	dst = ft_getnumber(str);
	if (dst == NULL)
		return (0);
	j = ft_strlen(dst) - 1;
	while (ft_isdigit((int)dst[j]))
	{
		res += (dst[j] - 48) * pow;
		pow *= 10;
		j--;
	}
	if (dst[0] == '-')
		res *= -1;
	return (res);
}
