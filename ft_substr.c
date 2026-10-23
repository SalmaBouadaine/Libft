/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:20:28 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/15 18:28:46 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*new_str;
	size_t				s_len;
	unsigned int		i;
	unsigned int		j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && s[j])
		new_str[i++] = s[j++];
	new_str[i] = '\0';
	return (new_str);
}
