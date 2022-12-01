/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:54:49 by cvidon            #+#    #+#             */
/*   Updated: 2022/11/09 15:32:01 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Free array of pointers of known size.
 **
 ** @param[in]  tab an array of pointers.
 ** @param[in]  size the size of the array of pointers.
 */

void	ft_freetab_size(void **tab, size_t size)
{
	while (size--)
		ft_free (tab[size]);
	ft_free (tab);
}
