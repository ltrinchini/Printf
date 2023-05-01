/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrinchini <ltrinchini@student.42lyon.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:57:07 by ltrinchi          #+#    #+#             */
/*   Updated: 2023/04/30 12:17:41 by ltrinchini       ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long	int nb, char *base, int *rtn)
{
	char	c;
	int		size_base;

	size_base = ft_strlen(base);
	if (nb < 0)
	{
		*rtn += write(STDOUT_FILENO, "-", 1);
		nb *= -1;
	}
	c = base[nb % size_base];
	if (nb >= size_base)
	{
		ft_putnbr_base(nb / size_base, base, rtn);
	}
	*rtn += write(STDOUT_FILENO, &c, 1);
}
