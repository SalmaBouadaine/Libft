/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:32:43 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/13 20:54:29 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*b_src;
	unsigned char		*b_dest;
	size_t				i;

	i = 0;
	b_dest = dest;
	b_src = src;
	while (i < n)
	{
		b_dest[i] = b_src[i];
		i++;
	}
	return (dest);
}
