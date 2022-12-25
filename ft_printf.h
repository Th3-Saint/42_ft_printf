/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:27:13 by mrobaii           #+#    #+#             */
/*   Updated: 2021/12/01 11:07:55 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putchar(char c, int *i);
void	ft_putstr(char *str, int *k);
void	ft_putnbr(int n, int *k);
void	ft_putunsigned(unsigned int n, int *k);
void	ft_puthexa(unsigned int n, int *i);
void	ft_putcaphexa(unsigned int n, int *i);
int		ft_printf(const char *s, ...);
void	ft_puthexalong(unsigned long n, int *k);
#endif
