/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:52:06 by mrobaii           #+#    #+#             */
/*   Updated: 2021/12/01 11:11:49 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, int *i)
{
	if (n < 10)
		ft_putchar(n + 48, i);
	else
		if (n < 16)
			ft_putchar(n + 87, i);
	if (n > 15)
	{
		ft_puthexa(n / 16, i);
		if (n % 16 < 10)
			ft_putchar(n % 16 + 48, i);
		else
			if (n % 16 < 16)
				ft_putchar(n % 16 + 87, i);
	}
}
