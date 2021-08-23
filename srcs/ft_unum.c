/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:53:18 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:18:51 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_unum(va_list op)
{
	char	*b;
	int		i;
	t_flags	tab;

	i = 0;
	tab.unum = va_arg(op, int);
	b = ft_uitoa(tab.unum);
	while (b[i] != '\0')
		ft_putchar(b[i++]);
	free(b);
	b = NULL;
	return (i);
}
