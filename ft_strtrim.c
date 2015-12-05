/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:43:30 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/02 14:42:49 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*dest;
	int			i;
	size_t		k;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	k = 0;
	i--;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s)
		i--;
	while ((s[k] == ' ' || s[k] == '\t' || s[k] == '\n') && s)
		k++;
	if (s[k] == '\0')
		return (ft_strnew(0));
	i++;
	dest = ft_strnew(i - k);
	if (dest == NULL)
		return (NULL);
	dest = ft_strsub(s, (unsigned int)k, ((size_t)i - k));
	return (dest);
}
