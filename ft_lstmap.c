/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouadai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:30:31 by sbouadai          #+#    #+#             */
/*   Updated: 2026/10/19 13:30:38 by sbouadai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*helper;
	t_list	*new;
	t_list	*res;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	helper = lst;
	while (helper)
	{
		cont = f(helper->content);
		new = ft_lstnew(cont);
		if (new == NULL)
		{
			del(cont);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		helper = helper->next;
	}
	return (res);
}
