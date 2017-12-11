/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 18:09:01 by llonger           #+#    #+#             */
/*   Updated: 2017/11/07 17:30:26 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int a;

	a = 0;
	while ((s1[a] != '\0') && (s2[a] != '\0') && (s1[a] == s2[a]))
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
