/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:27:00 by gyildiz           #+#    #+#             */
/*   Updated: 2024/12/11 19:23:55 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifdef __APPLE__
#  define NUL "0x0"
#  define WRITTEN 3
#  define NL "0x0"
#  define WRT 3
# else
#  define NUL "(null)"
#  define WRITTEN 6
#  define NL "(nil)"
#  define WRT 5
# endif

# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	function_call(char a, va_list args);
int	ft_string(char *s);
int	ft_pointer(unsigned long long n, int first_call);
int	ft_pointercast(void *ptr);
int	ft_decint(int di);
int	ft_unsignedint(unsigned int u);
int	ft_lowhex(unsigned int x);
int	ft_uphex(unsigned int ux);

#endif
