/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:51:02 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:20:44 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hex(va_list op, int a)
{
	char	*b;
	int		i;
	t_flags	tab;

	i = 0;
	tab.hex = va_arg(op, int);
	b = ft_hitoa(tab.hex, a);
	while (b[i] != '\0')
		ft_putchar(b[i++]);
	free(b);
	b = NULL;
	return (i);
}
