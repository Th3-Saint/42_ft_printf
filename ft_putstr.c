/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:31:33 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/30 22:31:50 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *k)
{
	size_t	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", k);
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i], k);
			i++;
		}
	}
}
