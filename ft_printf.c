/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:26:55 by enaam             #+#    #+#             */
/*   Updated: 2022/11/27 02:27:51 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *nb, ...)
{
	int		i;
	int		count;
	va_list	ptn;

	i = 0;
	count = 0;
	va_start(ptn, nb);
	if (write(1, 0, 0) == -1)
		return (-1);
	while (nb[i])
	{
		if (nb[i] == '%' && nb[i + 1])
			ft_checker(nb[++i], ptn, &count);
		else if (nb[i] != '%')
			ft_putchar(nb[i], &count);
		i++;
	}
	va_end(ptn);
	return (count);
}
