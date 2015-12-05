/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:33:26 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/05 16:49:43 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		current_pos;

	if (s2[0] == '\0')
		return ((char*)s1);
	i = 0;
	while (s1[i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			current_pos = i;
			while (s1[i] == s2[j] && s2[j])
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return ((char*)s1 + current_pos);
			i = current_pos;
		}
		i++;
	}
	return (NULL);
}
