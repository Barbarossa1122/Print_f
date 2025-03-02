/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexalower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <fionni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:51:22 by fionni            #+#    #+#             */
/*   Updated: 2025/02/28 18:32:29 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexalower(unsigned int nb)
{
	char	*hexa;
	int		output;

	hexa = "0123456789abcdef";
	output = 0;
	if (nb == 0)
	{
		output += write(1, "0", 1);
		return (output);
	}
	if (nb >= 16)
		output += ft_putnbr_hexalower(nb / 16);
	output += write(1, &hexa[nb % 16], 1);
	return (output);
}
