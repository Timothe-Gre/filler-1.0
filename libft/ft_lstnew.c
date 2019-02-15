/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:32:35 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:32:42 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	if (!content || !content_size)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
	}
	else
	{
		ptr->content = (void *)malloc(content_size);
		if (ptr->content == NULL)
			return (NULL);
		else
		{
			ft_memcpy(ptr->content, content, content_size);
			ptr->content_size = content_size;
		}
	}
	ptr->next = NULL;
	return (ptr);
}
