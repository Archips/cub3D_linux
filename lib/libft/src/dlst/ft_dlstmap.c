/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:34:17 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 10:26:12 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Apply function to content of all list's elements into new list.
 **
 ** "Iterates through lst and applies f to the content of each element.
 ** Creates a new list resulting of the successive applications of f.
 ** The del function is used to delete the content of an element if needed."
 **
 ** @param[out] lst a list.
 ** @param[in]  f a function.
 ** @param[in]  del a function (ie. free).
 ** @return     A new list or NULL.
 */

t_dlist	*ft_dlstmap(t_dlist *lst, void *(*f)(void *), void (*del)(void *))
{
	t_dlist	*cpy;
	t_dlist	*new;
	t_dlist	*tmp;

	cpy = lst;
	new = 0;
	while (1)
	{
		tmp = ft_dlstnew ((*f)(cpy->content));
		if (!tmp)
		{
			ft_dlstclear (&tmp, del);
			ft_dlstclear (&new, del);
			return (NULL);
		}
		ft_dlstadd_back (&new, tmp);
		cpy = cpy->next;
		if (!cpy)
			break ;
	}
	return (new);
}
