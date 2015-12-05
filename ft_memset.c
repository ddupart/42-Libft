/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:17:05 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 16:43:09 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void			*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*dst;

	dst = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
