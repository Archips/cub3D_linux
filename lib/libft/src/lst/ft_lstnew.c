/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:31 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:31 by cvidon           ###   ########.fr       */
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

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc (sizeof (t_list));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}
