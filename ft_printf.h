/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrinchini <ltrinchini@student.42lyon.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:34:27 by ltrinchi          #+#    #+#             */
/*   Updated: 2023/05/01 13:06:38 by ltrinchini       ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h> 

# define LOWER_HEX "0123456789abcdef"
# define UPPER_HEX "0123456789ABCDEF"
# define DECIMAL_DIGITS "0123456789"

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr_base(long	int nb, char *base, int *rtn);
int		ft_putadress(void *ptr);
size_t	ft_strlen(const char *str);

#endif
