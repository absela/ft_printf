/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 04:23:14 by absela            #+#    #+#             */
/*   Updated: 2021/12/13 04:23:18 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putd(int n)
{
	long long	nb;
	int			i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		i += ft_putc('-');
		nb *= (-1);
	}
	if (nb >= 10)
	{
		i += ft_putd(nb / 10);
		i += ft_putd(nb % 10);
	}
	else
		i += ft_putc(nb + 48);
	return (i);
}
