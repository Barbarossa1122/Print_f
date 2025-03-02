/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <fionni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:39:19 by fionni            #+#    #+#             */
/*   Updated: 2025/03/02 14:43:12 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(va_list arg)
{
	unsigned long	nbr;
	int				ptr;

	nbr = va_arg(arg, unsigned long);
	ft_putchar('0');
	ft_putchar('x');
	ptr = ft_putnbr_hexalower(nbr);
	return (ptr + 2);
}
