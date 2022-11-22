/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 04:23:48 by absela            #+#    #+#             */
/*   Updated: 2021/12/13 04:23:50 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putx(unsigned int nb, int t)
{
	char	*hex;
	char	*thex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	thex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_putx(nb / 16, t);
		i += ft_putx(nb % 16, t);
	}
	if (t == 1)
	{
		if (nb < 16)
			i += ft_putc(hex[nb]);
	}
	else
		if (nb < 16)
			i += ft_putc(thex[nb]);
	return (i);
}
