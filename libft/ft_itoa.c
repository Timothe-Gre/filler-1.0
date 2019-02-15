/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:41:22 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:42:01 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_size(int n)
{
	int		i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		signe;
	int		size;
	char	*dst;

	if (n == 0)
		return (ft_strdup("0"));
	signe = n;
	size = ft_size(n);
	if (!(dst = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	dst[size] = '\0';
	while (size--)
	{
		if (n < 0)
			dst[size] = -(n % 10) + '0';
		else
			dst[size] = n % 10 + '0';
		n = n / 10;
	}
	if (signe < 0)
		dst[0] = '-';
	return (dst);
}
