/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:54:49 by cvidon            #+#    #+#             */
/*   Updated: 2022/09/23 12:55:48 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Free NULL terminated array of pointers.
 **
 ** @param[in]  tab an array of pointers.
 */

void	ft_freetab(void **tab)
{
	void	**ptr;

	ptr = tab;
	while (*tab)
	{
		ft_free (*tab);
		tab++;
	}
	ft_free (ptr);
}
