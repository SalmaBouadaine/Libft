/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:34:47 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/13 11:54:39 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;
	size_t	i;

	lens = ft_strlen(s);
	i = lens;
	while (i > 0 && s[i] != (unsigned char)c)
		i--;
	if (i == 0 && s[i] != (unsigned char)c)
		return (NULL);
	return ((char *)s + i);
}
