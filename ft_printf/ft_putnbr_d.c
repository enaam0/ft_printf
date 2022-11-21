/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:18:42 by enaam             #+#    #+#             */
/*   Updated: 2022/11/21 21:30:09 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_d(int nb, int count)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr_d(nb);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb += 48);
		count++;
	}
	else
	{
		ft_putnbr_d(nb / 10);
		ft_putnbr_d(nb % 10);
	}
}
