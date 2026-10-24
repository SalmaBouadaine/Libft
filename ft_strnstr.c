/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:51:56 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/15 11:27:51 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!little[0])
		return ((char *)big);
	if (!little || !big)
		return (NULL);
	while (i < len && big[i])
	{
		j = i;
		k = 0;
		while (j < len && little[k] == big[j] && little[k] && big[j])
		{
			j++;
			k++;
		}
		if (!little[k])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
