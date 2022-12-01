/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:34:01 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 09:37:58 by cvidon           ###   ########.fr       */
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

void	ft_dlstiter(t_dlist *lst, void (*f)(void *))
{
	t_dlist	*cpy;

	cpy = lst;
	while (cpy)
	{
		f (cpy->content);
		cpy = cpy->next;
		if (!cpy)
			break ;
	}
}
