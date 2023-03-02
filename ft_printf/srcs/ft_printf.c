/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:10:22 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/11 11:53:58 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_data(char s, va_list arg)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (s == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (s == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putp(va_arg(arg, unsigned long));
	}
	else if (s == 'i' || s == 'd')
		count += ft_putnbr(va_arg(arg, int));
	else if (s == 'u')
		count += ft_putunsigned(va_arg(arg, unsigned int));
	else if (s == 'x' || s == 'X')
		count += ft_puthix(va_arg(arg, unsigned int), s);
	else if (s == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		cmpt;
	va_list	arg;

	cmpt = 0;
	i = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			cmpt += ft_data(s[i + 1], arg);
			i++;
		}
		else
			cmpt += ft_putchar(s[i]);
		if (!s[i])
			break ;
		i++;
	}
	va_end(arg);
	return (cmpt);
}
