/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <llonger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:57:09 by llonger           #+#    #+#             */
/*   Updated: 2017/12/07 10:13:30 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putwstr(wchar_t *str, int len)
{
	int i;

	i = 0;
	while (*str && i <= len)
	{
		i += ft_wchar_len(*str);
		if (i <= len)
			ft_putwchar(*str);
		str++;
	}
}
