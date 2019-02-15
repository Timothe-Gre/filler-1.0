/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:33:03 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:33:10 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **l, void *content, size_t c_size)
{
	t_list	*ptr;

	if (!*l)
		*l = ft_lstnew(content, c_size);
	else
	{
		ptr = *l;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = ft_lstnew(content, c_size);
	}
}
