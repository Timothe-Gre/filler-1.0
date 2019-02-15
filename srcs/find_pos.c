/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:02:58 by tigre             #+#    #+#             */
/*   Updated: 2019/02/12 13:03:06 by tigre            ###   ########.fr       */
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
