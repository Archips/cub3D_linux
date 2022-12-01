/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:48 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/01 08:33:20 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Output a string to a stream.
 **
 ** Add a newline.
 **
 ** @param[in]  s a string.
 ** @param[in]  fd a stream.
 **
 ** @see        PUTC(3) <stdio.h>
 */

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen (s));
	write (fd, "\n", 1);
}
