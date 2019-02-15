/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:13:18 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:13:23 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!(dst = ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (s == NULL || len > ft_strlen(s))
		return (NULL);
	dst = ft_strncpy(dst, &s[start], len);
	return (dst);
}
