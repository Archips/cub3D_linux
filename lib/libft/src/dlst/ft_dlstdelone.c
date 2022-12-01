/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:33:55 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 09:37:49 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Delete arbitrary element of list.
 **
 ** "Takes as a parameter a node and frees the memory of the node's content
 ** using the function del given as a parameter and free the node. The memory of
 ** next must not be freed."
 **
 ** @param[in]  lst a list.
 ** @param[in]  del a function (ie. free).
 */

void	ft_dlstdelone(t_dlist *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del (lst);
}
