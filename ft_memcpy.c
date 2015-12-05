/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 11:24:48 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 11:27:01 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstdst;
	char		*srcsrc;
	size_t		i;

	i = 0;
	dstdst = (char*)dst;
	srcsrc = (char*)src;
	while (i < n)
	{
		dstdst[i] = srcsrc[i];
		i++;
	}
	return (dst);
}
