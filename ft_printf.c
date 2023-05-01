/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrinchini <ltrinchini@student.42lyon.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:36:18 by ltrinchi          #+#    #+#             */
/*   Updated: 2023/04/30 12:23:08 by ltrinchini       ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_output(char c, va_list *list)
{
	int	rtn;

	rtn = 0;
	if (c == 'c')
		rtn = ft_putchar((char)va_arg(*list, int));
	else if (c == 's')
		rtn = ft_putstr((char *)va_arg(*list, char *));
	else if (c == 'p')
		rtn = ft_putadress((void *)va_arg(*list, void *));
	else if (c == 'd' || c == 'i')
		ft_putnbr_base(va_arg(*list, int), DECIMAL_DIGITS, &rtn);
	else if (c == 'u')
		ft_putnbr_base(va_arg(*list, unsigned int), DECIMAL_DIGITS, &rtn);
	else if (c == 'x')
		ft_putnbr_base(va_arg(*list, unsigned int), LOWER_HEX, &rtn);
	else if (c == 'X')
		ft_putnbr_base(va_arg(*list, unsigned int), UPPER_HEX, &rtn);
	else if (c == '%')
		rtn = ft_putchar('%');
	else
		return (-1);
	return (rtn);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		check;
	int		rtn;

	i = 0;
	check = 0;
	rtn = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] != '%')
			rtn += ft_putchar(format[i]);
		if (format[i] == '%')
		{
			i++;
			check = ft_output(format[i], &list);
			if (check == -1)
				return (0);
			rtn += check;
		}
		i++;
	}
	return (rtn);
}
