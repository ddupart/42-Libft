/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <ddupart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:42:40 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/02 19:44:10 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*next;
	t_list		*newlst;

	next = lst;
	while (next->next)
	{
		newlst = ft_lstnew(lst->content, lst->content_size);
		ft_lstadd(&next, newlst);
		if (newlst == NULL)
			return (NULL);
		newlst = f(lst);
		newlst->next = lst;
		lst = newlst;
	}
	return (newlst);
}
