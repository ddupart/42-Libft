/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 11:46:39 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 17:22:51 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void			*ft_memalloc(size_t size)
{
	void		*dest;

	dest = (void*)malloc(sizeof(*dest) * size);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, size);
	return (dest);
}
