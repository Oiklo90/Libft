/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <llonger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:19:28 by llonger           #+#    #+#             */
/*   Updated: 2017/12/05 10:01:39 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			*ft_alloc_str(const char *str)
{
	char	*truc;

	if (str == NULL)
		return (ft_alloc_str("(null)"));
	truc = (char*)malloc(ft_strlen(str) + 1);
	ft_strcpy(truc, str);
	return (truc);
}

static int		ft_compte(unsigned long long nbr, int base)
{
	int ret;

	ret = 0;
	while (nbr != 0)
	{
		nbr /= base;
		ret++;
	}
	return (ret);
}

char			*ft_itoa_base(unsigned long long nbr, int base, char *sbase)
{
	char		*ret;
	int			nb;
	int			i;
	char		tab[37];

	if (nbr == 0)
		return (ft_alloc_str("0"));
	if (!sbase)
		ft_strcpy(tab, "0123456789abcdefghijklmnopqrstuvwxyz");
	else
	{
		ft_strcpy(tab, sbase);
		base = ft_strlen(sbase);
	}
	nb = ft_compte(nbr, base);
	ret = (char *)malloc(sizeof(char) * (nb + 1));
	i = 1;
	while (nbr != 0)
	{
		ret[nb - i] = tab[nbr % base];
		nbr /= base;
		i++;
	}
	ret[nb] = '\0';
	return (ret);
}
