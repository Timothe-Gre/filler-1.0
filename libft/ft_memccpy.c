/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:34:58 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 20:24:25 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	while (n--)
	{
		*dst_1 = *src_1;
		dst_1++;
		if (*src_1 == (unsigned char)c)
			return (dst_1);
		src_1++;
	}
	return (NULL);
}
