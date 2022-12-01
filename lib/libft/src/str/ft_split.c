/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 08:30:16 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/02 14:23:50 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Count the words of a string.
 **
 ** @param[in]  s a string.
 ** @param[in]  c a word separator character.
 ** @return     The number of occurrence.
 */

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			count++;
			while (*s != c && *(s + 1))
				s++;
		}
		s++;
	}
	return (count);
}

/*
 ** @brief      Return the first word of a string in a new memory area.
 **
 ** @param[in]  s a string.
 ** @param[in]  c a word separator character.
 ** @return     The first word of the string.
 */

static char	*ft_fill(char const *s, char c)
{
	size_t	size;
	char	*str;
	int		index;

	size = 0;
	while (s[size] != c && s[size])
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index] != c && s[index])
	{
		str[index] = s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

/*
 ** @brief      Reverse free an array of string.
 **
 ** @param[in]  tab an array of string.
 ** @param[in]  i the array index to start from.
 */

static void	ft_backfree(char **tab, int i)
{
	while (i + 1)
	{
		free(tab[i]);
		i--;
	}
	free (tab);
	tab = NULL;
}

/*
 ** @brief      Split a string into words.
 **
 ** "Allocates (with malloc(3)) and returns an array of strings obtained by
 ** splitting ’s’ using the character ’c’ as a delimiter. The array must end
 ** with a NULL pointer."
 **
 ** @param[in]  s a string.
 ** @param[in]  c a word separator character.
 ** @return     An array of strings resulting from split or NULL.
 */

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	i = 0;
	tab = malloc (sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c && *s)
		{
			tab[i] = ft_fill(s, c);
			if (!tab[i])
			{
				ft_backfree(tab, i);
				return (NULL);
			}
			i++;
			while (*s != c && *(s + 1))
				s++;
		}
		s++;
	}
	tab[i] = 0;
	return (tab);
}
