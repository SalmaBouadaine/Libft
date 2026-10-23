/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:22:06 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/15 11:37:35 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*skip_spaces(const char	*nptr)
{
	while ((*nptr >= 7 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	return (nptr);
}

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;
	int	i;

	sign = 1;
	nbr = 0;
	i = 0;
	nptr = skip_spaces(nptr);
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	else if (nptr[i] < '0' || nptr[i] > '9')
		return (nbr);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	return (nbr * sign);
}
