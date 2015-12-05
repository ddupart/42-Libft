/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 11:28:54 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 16:43:36 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			k;

	k = 0;
	dest = (unsigned char*)dst;
	srce = (unsigned char*)src;
	while (k < n)
	{
		dest[k] = srce[k];
		if (srce[k] == (unsigned char)c)
			return ((void*)dest + k + 1);
		k++;
	}
	return (NULL);
}
