/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexaupper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <fionni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:21:58 by fionni            #+#    #+#             */
/*   Updated: 2025/03/01 16:09:14 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexaupper(unsigned int nb)
{
	char	*hexa;
	int		output;

	hexa = "0123456789ABCDEF";
	output = 0;
	if (nb == 0)
	{
		output += write(1, "0", 1);
		return (output);
	}
	if (nb >= 16)
		output += ft_putnbr_hexaupper(nb / 16);
	output += write(1, &hexa[nb % 16], 1);
	return (output);
}
