/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:52:01 by jgainza-          #+#    #+#             */
/*   Updated: 2021/08/04 19:52:03 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_hexstr(char *str, unsigned int n, int size, int a)
{
	str[size] = '\0';
	while (size--)
	{
		if (n % 16 < 10)
		{
			str[size] = (n % 16) + '0';
			n /= 16;
		}
		else
		{
			str[size] = (n % 16) + a;
			n /= 16;
		}
	}
}

char	*ft_hitoa(unsigned int n, int a)
{
	char			*str;
	int				size;
	unsigned int	x;

	size = 1;
	x = n / 16;
	while (x)
	{
		size++;
		x /= 16;
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (a == 'x')
		a = 87;
	else
		a = 55;
	ft_hexstr(str, n, size, a);
	return (str);
}
