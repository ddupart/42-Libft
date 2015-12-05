/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:04:46 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/02 15:34:28 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*next;

	next = *alst;
	if (alst)
	{
		while (next->next)
		{
			ft_lstdelone(&next, del);
			next = (*alst)->next;
		}
		ft_lstdelone(&next, del);
		*alst = NULL;
	}
}
