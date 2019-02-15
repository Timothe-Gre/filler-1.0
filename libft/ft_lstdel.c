/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:27:17 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:27:22 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*ptrnext;

	if (!alst || !(*del))
		return ;
	ptr = *alst;
	while (ptr != NULL)
	{
		ptrnext = ptr;
		ptr = ptr->next;
		ft_lstdelone(&ptrnext, (*del));
	}
	*alst = NULL;
}
