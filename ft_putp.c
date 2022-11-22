/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 04:23:27 by absela            #+#    #+#             */
/*   Updated: 2021/12/13 04:23:29 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putp(unsigned long long nb)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_putp(nb / 16);
		i += ft_putp(nb % 16);
	}
	if (nb < 16)
		i += ft_putc(hex[nb]);
	return (i);
}
