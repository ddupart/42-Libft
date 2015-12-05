/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:41:27 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 16:43:47 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while ((i < n) && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}
