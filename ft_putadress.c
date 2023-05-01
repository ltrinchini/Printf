/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrinchini <ltrinchini@student.42lyon.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:36:37 by ltrinchi          #+#    #+#             */
/*   Updated: 2023/04/30 12:21:15 by ltrinchini       ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_adress(unsigned long int nb, char *base, int *rtn)
{
	char	c;

	c = base[nb % 16];
	if (nb >= 16)
		ft_putnbr_adress(nb / 16, base, rtn);
	*rtn += write(STDOUT_FILENO, &c, 1);
}

int	ft_putadress(void *ptr)
{
	int	rtn;

	rtn = write(STDOUT_FILENO, "0x", 2);
	ft_putnbr_adress((unsigned long int)ptr, LOWER_HEX, &rtn);
	return (rtn);
}
