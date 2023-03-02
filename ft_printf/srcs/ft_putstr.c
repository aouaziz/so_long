/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaziz <aouaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:03:05 by aouaziz           #+#    #+#             */
/*   Updated: 2023/02/11 11:54:31 by aouaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	printer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_putstr(char *s)
{
	int	j;

	j = 0;
	if (!s)
	{
		printer("(null)");
		return (6);
	}
	while (s[j])
	{
		ft_putchar(s[j]);
		j++;
	}
	return (j);
}
