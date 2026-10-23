/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:50:52 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/15 16:15:02 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*b_dest;
	unsigned char	*b_src;
	size_t			i;

	b_dest = dest;
	b_src = (unsigned char *)src;
	if (n == 0)
		return (dest);
	if (b_dest > b_src)
	{
		i = n - 1;
		while (i > 0)
		{
			b_dest[i] = b_src[i];
			i--;
		}
		b_dest[i] = b_src[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
