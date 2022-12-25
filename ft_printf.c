/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:21:23 by mrobaii           #+#    #+#             */
/*   Updated: 2021/12/01 11:12:38 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parcing(va_list args, const char *s, int *i, int *rt)
{
	(*i)++;
	if (s[*i] == 'c')
		ft_putchar(va_arg(args, int), rt);
	if (s[*i] == 'd')
		ft_putnbr(va_arg(args, int), rt);
	if (s[*i] == 'x')
		ft_puthexa(va_arg(args, unsigned int), rt);
	if (s[*i] == 'X')
		ft_putcaphexa(va_arg(args, unsigned int), rt);
	if (s[*i] == 's')
		ft_putstr(va_arg(args, char *), rt);
	if (s[*i] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), rt);
	if (s[*i] == 'i')
		ft_putnbr(va_arg(args, int), rt);
	if (s[*i] == 'p')
	{
		ft_putstr("0x", rt);
		ft_puthexalong(va_arg(args, unsigned long long), rt);
	}
	if (s[*i] == '%')
		ft_putchar('%', rt);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		rt;

	va_start(args, s);
	i = 0;
	rt = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_parcing(args, s, &i, &rt);
		}
		else
			ft_putchar(s[i], &rt);
		i++;
	}
	return (rt);
}
