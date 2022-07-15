/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:13:09 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/15 11:40:52 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write(char c, int *cont)
{
	write(1, &c, 1);
	*cont += 1;
}

void	ft_all(char choose, int *cont, va_list args)
{
	if (choose == '%')
		ft_printf_char('%', cont);
	else if (choose == 'c')
		ft_printf_char(va_arg(args, int), cont);
	else if (choose == 's')
		ft_printf_string(va_arg(args, char *), cont);
	else if (choose == 'd')
		ft_printf_decimal(va_arg(args, int), cont);
	else if (choose == 'i')
		ft_printf_integer(va_arg(args, int), cont);
	else if (choose == 'u')
		ft_printf_unsigned(va_arg(args, unsigned int), cont);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_all(str[i + 1], &cont, args);
			i++;
		}
		else
		{
			ft_write(str[i], &cont);
		}
		i++;
	}
	va_end(args);
	return (cont);
}
