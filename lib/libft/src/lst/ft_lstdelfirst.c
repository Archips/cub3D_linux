/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:44:56 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 10:15:42 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Delete first element of list.
 **
 ** @param[out] lst a list.
 ** @param[in]  del a function (ie. free).
 */

void	ft_lstdelfirst(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (!temp)
		return ;
	if (!temp->next)
	{
		ft_lstdelone (temp, del);
		return ;
	}
	*lst = (*lst)->next;
	ft_lstdelone (temp, del);
}
