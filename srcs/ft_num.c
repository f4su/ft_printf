/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:50:25 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:16:39 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_num(va_list op)
{
	char	*b;
	int		i;
	t_flags	tab;

	i = 0;
	tab.num = va_arg(op, int);
	b = ft_itoa(tab.num);
	while (b[i] != '\0')
		ft_putchar(b[i++]);
	free(b);
	b = NULL;
	return (i);
}
