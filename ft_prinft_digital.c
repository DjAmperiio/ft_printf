/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft_digital.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:59:55 by jnevado-          #+#    #+#             */
/*   Updated: 2022/06/27 14:06:02 by jnevado-         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num < 10)
		ft_putchar_fd((char)(num + '0'), fd);
	else
	{
		ft_putnbr_fd((int)(num / 10), fd);
		ft_putchar_fd((char)(num % 10 + '0'), fd);
	}
}

int	ft_prinft_digital(char *str)
{
	if (str == NULL)
		return (putstr("(null)"));
	return (putstr(str));
}
