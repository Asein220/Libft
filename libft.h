/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:37:42 by atembras          #+#    #+#             */
/*   Updated: 2023/10/06 21:06:48 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>

int						ft_toupper(int n);
void					*ft_memset(void *s, int c, size_t n);
void					ft_bzero(void *s, size_t n);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_atoi(const char *str);
int						ft_isdigit(int c);
int						ft_isprint(int c);
char					*ft_strtrim(const char *s1, const char *set);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memmove(void *dest, void *src, size_t n);
char					*ft_strrchr(const char *str, int c);
char					*ft_strnstr(const char *h, const char *needle,
							size_t len);
char					*ft_strchr(char *str, int c);
unsigned int			ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size);
int						ft_strlen(const char *str);
int						ft_tolower(int n);
int						ft_strncmp(char *s1, char *s2, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
void					*ft_calloc(size_t nmemb, size_t size);
char					*ft_strdup(const char *str);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_substr(char const *s, unsigned int start,
							size_t len);
char					*ft_itoa(int n);
char					**ft_split(char const *s, char c);
char					*ft_strmapi(const char *s,
							char (*f)(unsigned int, char));
void					ft_striteri(char *s, void (*f)(unsigned int, char*));
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char *s, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **lst, t_list *new);
int						ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
void					ft_lstadd_back(t_list **lst, t_list *new);
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstclear(t_list **lst, void (*del)(void*));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));

#endif
