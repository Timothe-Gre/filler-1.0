/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <tigre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:51:43 by tigre             #+#    #+#             */
/*   Updated: 2019/02/07 16:28:38 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		find_pos(t_struct *s)
{
	s->y_pos = 0;
	s->weight = 0;
	while (s->y_pos < s->h_map)
	{
		s->x_pos = 0;
		while (s->x_pos < s->w_map)
		{
			if (s->map[s->y_pos][s->x_pos] == -2)
				place_piece(s);
			(s->x_pos)++;
		}
		(s->y_pos)++;
	}
	return (s->weight);
}
