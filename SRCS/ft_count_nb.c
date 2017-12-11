/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <llonger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:14:56 by llonger           #+#    #+#             */
/*   Updated: 2017/12/10 23:15:01 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_count_nb(long i)
{
	int count;

	count = 0;
	if (i < 0)
		i = -i;
	if (i == 0)
		count++;
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}
