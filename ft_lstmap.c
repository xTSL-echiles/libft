/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:14:47 by echiles           #+#    #+#             */
/*   Updated: 2020/11/06 14:15:19 by echiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *n;
	t_list *s;

	s = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		n = ft_lstnew(f(lst->content));
		if (n == NULL)
		{
			ft_lstclear(&s, del);
			return (NULL);
		}
		ft_lstadd_back(&s, n);
		lst = lst->next;
	}
	return (s);
}
