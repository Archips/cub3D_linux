/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:51:05 by cvidon            #+#    #+#             */
/*   Updated: 2022/03/18 12:12:38 by cvidon           ###   ########.fr       */
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*new;
	t_list	*tmp;

	cpy = lst;
	new = 0;
	while (1)
	{
		tmp = ft_lstnew ((*f)(cpy->content));
		if (!tmp)
		{
			ft_lstclear (&tmp, del);
			ft_lstclear (&new, del);
			return (NULL);
		}
		ft_lstadd_back (&new, tmp);
		cpy = cpy->next;
		if (!cpy)
			break ;
	}
	return (new);
}
