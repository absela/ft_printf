/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 04:22:52 by absela            #+#    #+#             */
/*   Updated: 2021/12/18 16:41:59 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putc(char c);
int	ft_puts(char *str);
int	ft_putu(unsigned int nb);
int	ft_putx(unsigned int nb, int t);
int	ft_putd(int n);
int	ft_putp(unsigned long long nb);
int	ft_printf(const char *format, ...);
int	ft_specifier(char c, va_list ap);

#endif
