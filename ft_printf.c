/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:13:09 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/13 13:09:42 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write(char c, int *cont)
{
	write(1, &c, 1);
	*cont += 1;
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		cont;
	va_list	args;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == "%")
			ft_all(*str);
		ft_write(str[i], &cont);
		i++;
	}
	return (cont);
}
