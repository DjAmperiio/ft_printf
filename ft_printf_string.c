/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:21:19 by jnevado-          #+#    #+#             */
/*   Updated: 2022/06/27 13:40:30 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h";

int	putstr(char *str)
{
	int	size;

	size = 0;
	while (str)
	{
		write(1, &str[size], 1);
		size++;
	}
	return (size);
}

int	ft_printf_string(char *str)
{
	if (str == NULL)
	{
		putstr("(null)");
		return (6);
	}
	return (putstr(str));
}
