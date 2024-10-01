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

/* is funcions*/
int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

/* str functions*/
size_t	ft_strlen(char const *s);
size_t  ft_strlcpy(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char   *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t n);

/* mem functions*/
void	*ft_memset(void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

/* bzero functions*/
void	ft_bzero(void *s, size_t n);

/* to functions*/
int ft_toupper(int c);
int ft_tolower(int c);

/* atoi functions*/
int ft_atoi(const char *str);

/* using malloc functions*/
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s);

#endif //fecha o ifndef