/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:06:36 by enaam             #+#    #+#             */
/*   Updated: 2022/11/21 21:28:56 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_p(unsigned long long nb, int count)
{
	char	*hx;

	hx = "0123456789abcdef";
	if (nb >= 0 && nb <= 16)
	{
		nb = hx[nb];
		ft_putchar(nb);
		count++;
	}
	else
	{
		ft_putnbr_p(nb / 16);
		ft_putnbr_p(nb % 16);
	}
}
