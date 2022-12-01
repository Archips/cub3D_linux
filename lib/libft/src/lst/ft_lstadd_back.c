/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:15 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 09:38:51 by cvidon           ###   ########.fr       */
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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cpy;

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
}
