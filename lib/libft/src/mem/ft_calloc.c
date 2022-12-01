/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:06 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:06 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Allocate and free dynamic memory.
 **
 ** "The calloc() function allocates memory for an array of nmemb elements of
 ** size bytes each and returns a pointer to the allocated memory.
 ** The memory is set to zero."
 **
 ** @see        CALLOC(3) <stdlib.h>
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			len;

	if (nmemb >= INT_MAX || size >= INT_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	len = nmemb * size;
	while (len--)
		ptr[len] = 0;
	return (ptr);
}
