/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:51:51 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/04 19:51:53 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_nbrstr(char *str, unsigned int n, int size)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	int				size;
	unsigned int	x;

	size = 1;
	x = n / 10;
	while (x)
	{
		size++;
		x /= 10;
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	ft_nbrstr(str, n, size);
	return (str);
}
