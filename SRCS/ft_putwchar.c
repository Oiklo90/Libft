/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <llonger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:56:57 by llonger           #+#    #+#             */
/*   Updated: 2017/12/06 19:29:10 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putwchar(wchar_t c)
{
	if (ft_wchar_len(c) == 1)
		ft_putchar(c);
	else if (ft_wchar_len(c) == 2)
	{
		ft_putchar((c >> 6 & 0x1F) | 0xC0);
		ft_putchar((c & 0xBF) | 0x80);
	}
	else if (ft_wchar_len(c) == 3)
	{
		ft_putchar((c >> 12 & 0x1) | 0xEE);
		ft_putchar((c >> 6 & 0x3F) | 0x80);
		ft_putchar((c & 0x3F) | 0x80);
	}
	else if (ft_wchar_len(c) == 4)
	{
		ft_putchar((c >> 18 & 0x07) | 0xF0);
		ft_putchar((c >> 12 & 0x3F) | 0x80);
		ft_putchar((c >> 6 & 0x3F) | 0x80);
		ft_putchar((c & 0x3F) | 0x80);
	}
}
