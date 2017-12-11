/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <llonger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:57:59 by llonger           #+#    #+#             */
/*   Updated: 2017/12/06 18:01:09 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

ssize_t		ft_wchar_len(wchar_t c)
{
	ssize_t len;

	len = 0;
	if (c <= 0x7F)
		len = 1;
	else if (c <= 0x7FF)
		len = 2;
	else if (c <= 0xFFFF)
		len = 3;
	else if (c <= 0x10FFFF)
		len = 4;
	return (len);
}
