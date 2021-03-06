/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 14:49:34 by llonger           #+#    #+#             */
/*   Updated: 2017/11/07 18:04:57 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int a;
	int b;

	a = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[a] != '\0')
	{
		b = 0;
		while (s2[b] == s1[a + b])
		{
			b++;
			if (s2[b] == '\0')
				return ((char *)s1 + a);
		}
		a++;
	}
	return (0);
}
