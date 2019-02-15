/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:54:05 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:06:46 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (size + s);
	if (s < size - d)
	{
		ft_memcpy(dst + d, src, s);
		dst += d + s;
	}
	else
	{
		ft_memcpy(dst + d, src, size - d - 1);
		dst += size - 1;
	}
	*dst = '\0';
	return (s + d);
}
