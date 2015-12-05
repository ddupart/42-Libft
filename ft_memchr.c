/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:05:52 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 11:33:51 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;
	size_t	i;

	ss = (char*)s;
	i = 0;
	while ((i < n) && ss[i] != (char)c)
		i++;
	if (i == n)
		return (NULL);
	else
		return ((void*)s + i);
}
