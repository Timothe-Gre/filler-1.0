/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:33:23 by tigre             #+#    #+#             */
/*   Updated: 2018/11/29 15:37:52 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *alloc;

	if (size > 4294967295)
		return (NULL);
	if (!(alloc = malloc(sizeof(*alloc) * (size + 1))))
		return (NULL);
	ft_memset(alloc, 0, size);
	return (alloc);
}
