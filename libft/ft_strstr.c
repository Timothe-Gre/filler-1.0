/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:12:51 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:12:58 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;
	char	*s;

	s = (char *)s1;
	len = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (*s)
	{
		if (ft_strncmp(s, s2, len) == 0)
			return (s);
		s++;
	}
	return (NULL);
}
