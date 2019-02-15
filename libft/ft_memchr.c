/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:35:26 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:35:31 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_1;

	s_1 = (unsigned char *)s;
	while (n--)
	{
		if (*s_1 == (unsigned char)c)
			return (s_1);
		s_1++;
	}
	return (NULL);
}
