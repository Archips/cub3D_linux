/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:50:48 by cvidon            #+#    #+#             */
/*   Updated: 2022/11/09 15:32:31 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
 ** =========[ Includes ]==========
 */

# include <unistd.h>
# include <stdlib.h>

# include <limits.h>
# include <stdio.h>

/*
 ** =========[ Defines ]===========
 */

/*
 ** @brief      The minimum amount of characters (bytes) read by one
 **             ft_get_next_line call on the given file descriptor.
 **
 ** @see		ft_get_next_line
 */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*
 ** @brief      The maximum number of file that can be read simultaneously by
 **             ft_get_next_line.
 **
 ** @see		ft_get_next_line
 */

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

/*
 ** =========[ Structures ]========
 */

/*
 ** @brief      Linked list.
 **
 ** @var        content the node content.
 ** @var        next a pointer to the next node.
 **
 ** @see        src/lst
 */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
 ** @brief      Doubly linked list.
 **
 ** @var        content the node content.
 ** @var        prev a pointer to the prev node.
 ** @var        next a pointer to the next node.
 **
 ** @see        src/dlst
 */

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}	t_dlist;

/*
 ** =========[ Prototypes ]========
 */

/*
 ** dlst/
 **
 ** @brief      Doubly linked list.
 */

void	ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void	ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void	ft_dlstclear(t_dlist **lst, void (*del)(void *));
void	ft_dlstdelfirst(t_dlist **lst, void (*del)(void *));
void	ft_dlstdelone(t_dlist *lst, void (*del)(void *));
void	ft_dlstiter(t_dlist *lst, void (*f)(void *));
t_dlist	*ft_dlstlast(t_dlist *lst);
t_dlist	*ft_dlstmap(t_dlist *lst, void *(*f)(void *), void (*del)(void *));
t_dlist	*ft_dlstnew(void *content);
int		ft_dlstsize(t_dlist *lst);

/*
 ** lst/
 **
 ** @brief      Linked list.
 */

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelfirst(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/*
 ** is/
 **
 ** @brief      Test that return true or false.
 */

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);

/*
 ** int/
 **
 ** @brief      Integer manipulation.
 */

int		ft_abs(int nb);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
size_t	ft_numlen(long ln);

/*
 ** mem/
 **
 ** @brief      Dynamic memory.
 */

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_free(void *ptr);
void	ft_freetab(void **tab);
void	ft_freetab_size(void **tab, size_t size);

/*
 ** io/
 **
 ** @brief      Input Output.
 */

char	*ft_get_next_line(int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

/*
 ** str/
 **
 ** @brief      String manipulation.
 */

char	**ft_split(char const *s, char c);
char	*ft_strchr(char const *s, int c);
int		ft_strcmp(char const *s1, char const *s2);
char	*ft_strdup(char const *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strjoin_free_s1(char *s1, char const *s2);
char	*ft_strjoin_free_s2(char const *s1, char *s2);
size_t	ft_strlcat(char *dst, char const *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);
size_t	ft_strlen(char const *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char	*ft_strnstr(char const *haystack, char const *needle, size_t len);
char	*ft_strrchr(char const *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(const char *str, unsigned int start, size_t size);

/*
 ** to/
 **
 ** @brief      Convert.
 */

int		ft_atoi(char const *str);
long	ft_atol(char const *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
