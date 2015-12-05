/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:55:19 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 17:15:21 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count(int n)
{
	int				i;
	unsigned int	n3;

	i = 1;
	if (n < 0)
		n *= -1;
	n3 = (unsigned int)n;
	while (n3 / 10 > 0)
	{
		i++;
		n3 = n3 / 10;
	}
	return (i);
}

static int			ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char				*ft_itoa(int n)
{
	int				k;
	char			*dest;

	k = ft_count(n);
	dest = ft_strnew((size_t)k + (size_t)ft_isneg(n));
	if (dest == NULL)
		return (NULL);
	if (n == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (ft_isneg(n) == 1)
	{
		dest[0] = '-';
		n = n * (-1);
	}
	else
		k--;
	while ((unsigned int)n > 0)
	{
		dest[k] = ((unsigned int)n % 10) + 48;
		n = (unsigned int)n / 10;
		k--;
	}
	return (dest);
}
