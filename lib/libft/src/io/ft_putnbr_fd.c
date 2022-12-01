/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:52 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:52 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Output a number to a stream.
 **
 ** @param[in]  n a number.
 ** @param[in]  fd a stream.
 **
 ** @see        PUTC(3) <stdio.h>
 */

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		write (fd, "-", 1);
	}
	if (ln > 9)
		ft_putnbr_fd ((int)(ln / 10), fd);
	write (fd, &"0123456789"[ln % 10], 1);
}
