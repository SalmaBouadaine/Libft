/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:50:10 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/19 11:50:15 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*helper;

	if (!lst || !del)
		return ;
	helper = *lst;
	while (helper)
	{
		helper = helper->next;
		ft_lstdelone(*lst, del);
		*lst = helper;
	}
}
