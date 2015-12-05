/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:04:00 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 17:21:45 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*dest;
	size_t	i;

	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
