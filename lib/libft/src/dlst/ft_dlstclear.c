/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:33:43 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 10:21:19 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Clear a list starting from an element till the last one.
 **
 ** "Deletes and frees the given node and every successor of that node, using
 ** the function del and free(3).  Finally, the pointer to the list must be
 ** set to NULL."
 **
 ** @param[out] lst a list.
 ** @param[in]  del a function (ie. free).
 */

void	ft_dlstclear(t_dlist **lst, void (*del)(void *))
{
	t_dlist	*ptr;

	ptr = *lst;
	while (ptr != NULL)
	{
		*lst = (*lst)->next;
		ft_dlstdelone(ptr, del);
		ptr = *lst;
	}
}
