/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:48:40 by enaam             #+#    #+#             */
/*   Updated: 2022/11/23 14:09:54 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *count)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb += 48, count);
	else
	{
		ft_putnbr_u(nb / 10, count);
		ft_putnbr_u(nb % 10, count);
	}
}
