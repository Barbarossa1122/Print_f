/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printinteger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <fionni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:00:30 by fionni            #+#    #+#             */
/*   Updated: 2025/03/02 15:22:09 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countnum(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	if (nb == 0)
		count++;
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

int	ft_printinteger(va_list arg)
{
	int	nb;
	int	count;

	nb = va_arg(arg, int);
	count = ft_countnum(nb);
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		count = 11;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb *= -1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
		ft_putchar(nb + 48);
	return (count);
}
