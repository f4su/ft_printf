/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:48:37 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:29:10 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <unistd.h>

int	ft_check_convertions(const char *format, va_list op, int i)
{
	int	a;

	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		a = ft_num(op);
	else if (format[i + 1] == 'u')
		a = ft_unum(op);
	else if (format[i + 1] == 'x')
		a = ft_hex(op, 'x');
	else if (format[i + 1] == 'X')
		a = ft_hex(op, 'X');
	else if (format[i + 1] == 'c')
		a = ft_char(op);
	else if (format[i + 1] == 's')
		a = ft_str(op);
	else if (format[i + 1] == 'p')
		a = ft_ptr(op);
	else if (format[i + 1] == '%')
		a = write(1, "%", 1);
	else
		return (-1);
	return (a);
}

int	ft_manipulate_format(const char *format, va_list op)
{
	char	*temp;
	int		i;
	int		j;

	temp = ft_strdup(format);
	i = 0;
	j = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] != '%')
			j += write (1, &temp[i++], 1);
		else
		{
			j += ft_check_convertions(temp, op, i);
			if (j == -1)
			{
				j = write(1, "%", 1);
				i++;
				continue ;
			}
			i += 2;
		}
	}
	free(temp);
	return (j);
}

int	ft_printf(const char *format, ...)
{
	va_list	op;
	int		all;

	va_start(op, format);
	all = ft_manipulate_format(format, op);
	va_end(op);
	return (all);
}
