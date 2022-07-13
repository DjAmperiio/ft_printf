/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:40:00 by jnevado-          #+#    #+#             */
/*   Updated: 2022/07/13 12:31:20 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "unistd.h"
# include "stdarg.h"

int	ft_printf_char(char c);
int	ft_prinft_string(char *str);
int	ft_printf_pointer(void *ptr);

#endif