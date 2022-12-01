/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:42 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:42 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Output a character to a stream.
 **
 ** @param[in]  c a char.
 ** @param[in]  fd a stream.
 **
 ** @see        PUTC(3) <stdio.h>
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
