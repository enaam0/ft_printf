/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:51 by enaam             #+#    #+#             */
/*   Updated: 2022/11/27 02:15:37 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checker(char c, va_list ptn, int *count)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_d(va_arg(ptn, int), count);
	else if (c == 'c')
		ft_putchar(va_arg(ptn, int), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_p(va_arg(ptn, unsigned long long), count);
	}
	else if (c == 'x' || c == 'X')
		ft_putnbr_hx(va_arg(ptn, unsigned int), c, count);
	else if (c == 's')
		ft_putstr(va_arg(ptn, char *), count);
	else if (c == 'u')
		ft_putnbr_u(va_arg(ptn, unsigned int), count);
	else if (c == '%')
		ft_putchar(c, count);
	else
		ft_putchar(c, count);
}
