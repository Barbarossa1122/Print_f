/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexalower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fionni <fionni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:04:15 by fionni            #+#    #+#             */
/*   Updated: 2025/03/01 16:08:02 by fionni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexalower(va_list arg)
{
	unsigned int	nb;

	nb = va_arg(arg, unsigned int);
	return (ft_putnbr_hexalower(nb));
}
