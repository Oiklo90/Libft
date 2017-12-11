/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <llonger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:56:14 by llonger           #+#    #+#             */
/*   Updated: 2017/12/06 18:01:02 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

ssize_t		ft_wstr_len(wchar_t *str)
{
	ssize_t len;

	len = 0;
	while (*str)
	{
		len += ft_wchar_len(*str);
		str++;
	}
	return (len);
}
