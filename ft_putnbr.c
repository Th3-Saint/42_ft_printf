/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:34:33 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/30 18:51:35 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-', i);
	}
	else
		nb = n;
	if (nb < 10)
		ft_putchar(nb + 48, i);
	if (nb > 9)
	{
		ft_putnbr(nb / 10, i);
		ft_putchar(nb % 10 + 48, i);
	}
}
