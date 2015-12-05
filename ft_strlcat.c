/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:39:29 by ddupart           #+#    #+#             */
/*   Updated: 2015/11/30 19:18:44 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dste;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dste = i;
	while (src[i - dste] && i < (size - 1))
	{
		dst[i] = src[i - dste];
		i++;
	}
	if (dste < size)
		dst[i] = '\0';
	return (dste + ft_strlen(src));
}
