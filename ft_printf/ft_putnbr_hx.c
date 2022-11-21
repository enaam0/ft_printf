/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:50:40 by enaam             #+#    #+#             */
/*   Updated: 2022/11/21 21:34:51 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hx(unsigned long long nb, char c, int count)
{
	char	*hx;
	char	*hx_u;

	hx = "0123456789abcdef";
	hx_u = "0123456789ABCDEF";
	if (nb >= 0 && nb <= 16)
	{
		if (c == 'x')
			ft_putchar(hx[nb]);
		else if (c == 'X')
			ft_putchar(hx_u[nb]);
	}
	else
	{
		ft_putnbr_hx(nb / 16, c, count++);
		ft_putnbr_hx(nb % 16, c);
	}
}
