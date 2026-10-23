/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:28:01 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/17 20:53:35 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_len(int n)
{
	int		i;
	long	nbr;

	i = 1;
	nbr = n;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		j;
	char	*res;
	long	nbr;

	len = find_len(n);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		res[i++] = '-';
	}
	j = len - 1;
	while (j >= i)
	{
		res[j--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	res[len] = '\0';
	return (res);
}
