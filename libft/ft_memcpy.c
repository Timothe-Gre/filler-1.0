/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:40:49 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:40:52 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;

	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	while (n--)
	{
		*dst_1 = *src_1;
		dst_1++;
		src_1++;
	}
	return (dst);
}
