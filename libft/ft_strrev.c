/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:11:31 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 20:50:14 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	c;

	i = 0;
	len = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i < len)
	{
		c = str[i];
		str[i] = str[len - 1];
		str[len - 1] = c;
		len--;
		i++;
	}
	return (str);
}
