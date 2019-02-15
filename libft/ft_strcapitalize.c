/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:45:58 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 20:45:48 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if ((ft_isalpha(str[i]) == 1))
		{
			if ((str[i] >= 'a') && ((ft_isalpha(str[i - 1]) == 0) || i == 0)
					&& (ft_isdigit(str[i - 1]) == 0))
				str[i] = (str[i] - 32);
			else if ((str[i] <= 'Z') && (ft_isalpha(str[i - 1]) == 1))
				str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
