/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:57:24 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:42:11 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	size_t	ptr;
	char	*str;
	int		num;
	int		unum;
	int		hex;
	int		len;
}			t_flags;

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_num(va_list op);
int		ft_char(va_list op);
int		ft_str(va_list op);
int		ft_unum(va_list op);
int		ft_ptr(va_list op);
int		ft_hex(va_list op, int a);
int		ft_check_convertions(const char *format, va_list op, int i);
int		ft_manipulate_format(const char *format, va_list op);
char	*ft_pitoa(size_t ptr);
char	*ft_uitoa(unsigned int n);
char	*ft_hitoa(unsigned int n, int a);

#endif
