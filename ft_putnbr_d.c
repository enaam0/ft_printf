/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:18:42 by enaam             #+#    #+#             */
/*   Updated: 2022/11/25 22:26:09 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_d(int nb, int *count)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", count);
	else if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, count);
	else if (nb > 9)
	{
		ft_putnbr_d(nb / 10, count);
		ft_putnbr_d(nb % 10, count);
	}
}
