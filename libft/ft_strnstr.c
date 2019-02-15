/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:10:29 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 19:46:49 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char		*s;
	size_t		len;

	s = (char *)s1;
	len = ft_strlen(s2);
	if (*s2 == '\0')
		return (s);
	while (*s && len <= n)
	{
		if (ft_strncmp(s, s2, len) == 0)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}
