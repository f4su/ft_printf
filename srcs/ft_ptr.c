/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:47:08 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:24:58 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_ptr(va_list op)
{
	char	*b;
	char	*d;
	int		i;
	t_flags	tab;

	i = 0;
	tab.ptr = va_arg(op, size_t);
	if (!tab.ptr)
		return (write (1, "0x0", 3));
	d = ft_pitoa(tab.ptr);
	b = ft_strjoin("0x", d);
	while (b[i] != '\0')
		ft_putchar(b[i++]);
	free(b);
	free(d);
	b = NULL;
	d = NULL;
	return (i);
}
