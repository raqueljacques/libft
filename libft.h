/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdos-san <rdos-san@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:01:19 by rdos-san          #+#    #+#             */
/*   Updated: 2024/09/20 17:00:59 by rdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//if not defined
#ifndef LIBFT_H //verifica se a libft já foi definida
# define LIBFT_H //define a libft, garantindo que não será definida novamente

# include <stdlib.h>

/* is funcions*/
//int	ft_isalpha(int c);
//int	ft_isdigit(int c);
//int	ft_isalnum(int c);
//int	ft_isascii(int c);
//int	ft_isprint(int c);

/* str functions*/
//size_t	ft_strlen(char const *s);
//size_t	ft_strlcpy(char *dest, const char *src, size_t n);
//size_t	ft_strlcat(char *dest, const char *src, size_t n);
//char	*ft_strchr(const char *s, int c);
//char	*ft_strrchr(const char *s, int c);
//int	ft_strncmp(const char *s1, const char *s2, size_t n);
//char	*ft_strnstr(const char *big, const char *little, size_t n);

/* mem functions*/
//void	*ft_memset(void *s, int c, size_t n);
//void	*ft_memcpy(void *dest, const void *src, size_t n);
//void	*ft_memmove(void *dest, const void *src, size_t n);
//void	*ft_memchr(const void *s, int c, size_t n);
//int	ft_memcmp(const void *s1, const void *s2, size_t n);

/* bzero functions*/
//void	ft_bzero(void *s, size_t n);

/* to functions*/
//int	ft_toupper(int c);
//int	ft_tolower(int c);

/* atoi functions*/
//int	ft_atoi(const char *str);

/* using malloc functions*/
//void    *ft_calloc(size_t nmemb, size_t size);
//char	*ft_strdup(const char *s);

/* part 2 - additional functions */
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* bonus part functions */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif //fecha o ifndef
