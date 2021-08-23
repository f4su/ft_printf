/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:50:53 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/05 14:02:10 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_str(va_list op)
{
	int		i;
	t_flags	tab;

	i = 0;
	tab.str = va_arg(op, char *);
	if (!tab.str)
		return (write (1, "(null)", 6));
	while (tab.str[i] != '\0')
		write (1, &tab.str[i++], 1);
	return (i);
}
