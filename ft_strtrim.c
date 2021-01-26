/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echiles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:09:08 by echiles           #+#    #+#             */
/*   Updated: 2020/11/09 15:44:53 by echiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*s2;

	s2 = (char*)s1;
	if (s1 == 0)
		return (NULL);
	while (*s1 && ft_strrchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strrchr(set, s1[size]))
		size--;
	return (set == 0 ? s2 : ft_substr(s1, 0, size + 1));
}
