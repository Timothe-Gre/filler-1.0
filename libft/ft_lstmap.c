/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:31:22 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:32:16 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstnew;
	t_list	*result;

	lstnew = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		result = f(lst);
		if (!result)
			return (lstnew);
		ft_lstpushback(&lstnew, result->content, result->content_size);
		lst = lst->next;
	}
	return (lstnew);
}
