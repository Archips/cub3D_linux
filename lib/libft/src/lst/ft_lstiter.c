/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:26 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/30 10:17:32 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Apply function to content of all list's elements.
 **
 ** "Iterates the list lst and applies the function f on the content of each
 ** node."
 **
 ** @param[out] lst a list.
 ** @param[in]  f a function.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cpy;

	cpy = lst;
	while (1)
	{
		f (cpy->content);
		cpy = cpy->next;
		if (!cpy)
			break ;
	}
}
