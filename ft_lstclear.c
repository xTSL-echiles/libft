/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:13:25 by echiles           #+#    #+#             */
/*   Updated: 2020/11/06 14:14:12 by echiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *save1;

	while (*lst)
	{
		save1 = (*lst)->next;
		if (del)
		{
			del((*lst)->content);
		}
		free(*lst);
		*lst = save1;
	}
	if (!lst)
		*lst = NULL;
}
