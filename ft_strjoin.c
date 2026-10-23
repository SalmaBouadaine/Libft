/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:03:10 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/15 20:29:59 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*sres;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sres = malloc(len1 + len2 + 1);
	if (sres == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		sres[i++] = *s1++;
	while (*s2)
		sres[i++] = *s2++;
	sres[i] = '\0';
	return (sres);
}
