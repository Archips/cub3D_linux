/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:34:24 by cvidon            #+#    #+#             */
/*   Updated: 2022/04/23 10:18:34 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Create a new list.
 **
 ** "Allocates (with malloc(3)) and returns a new node.  The member variable
 ** content is initialized with the value of the parameter content. The variable
 ** next is initialized to NULL."
 **
 ** @param[in]  content the value to initialize the head's content with.
 ** @return     The head of the new list or NULL.
 */

t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*first;

	first = malloc (sizeof (t_dlist));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	first->prev = NULL;
	return (first);
}
