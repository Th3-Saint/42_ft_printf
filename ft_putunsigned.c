/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:45:52 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/30 18:53:00 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *k)
{
	if (n < 10)
		ft_putchar(n + 48, k);
	else
	{
		ft_putunsigned(n / 10, k);
		ft_putchar(n % 10 + 48, k);
	}
}
