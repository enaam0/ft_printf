/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:17:39 by enaam             #+#    #+#             */
/*   Updated: 2022/11/21 21:33:25 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *nb, ...);
void	ft_putstr(char *s, int count);
void	ft_putchar(char c, int count);
void	ft_putnbr_d(int nb, int count);
void	ft_putnbr_u(unsigned int nb, int count);
void	ft_putnbr_hx(unsigned long long nb, char c, int count);
void	ft_putnbr_p(unsigned long long nb, int count);
void	ft_checker(char c, va_list ptn, int count);

#endif