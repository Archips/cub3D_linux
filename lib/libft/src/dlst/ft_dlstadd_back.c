/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:33:18 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 10:17:03 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Add element to list back.
 **
 ** "Adds the node new at the end of the list."
 **
 ** @param[out] lst a list.
 ** @param[in]  new the element to add.
 */

void	ft_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist	*cpy;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	cpy = *lst;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = new;
	new->prev = cpy;
}
