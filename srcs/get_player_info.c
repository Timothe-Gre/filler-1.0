/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_player_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:04:03 by tigre             #+#    #+#             */
/*   Updated: 2019/02/12 13:22:30 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	get_player_info(t_struct *s, char *line)
{
	while (get_next_line(0, &line))
	{
		if (ft_strncmp(line + 23, "tigre.filler", 12) == 0)
		{
			if (ft_atoi(line + 10) == 1)
				s->status = 'O';
			else
				s->status = 'X';
			break ;
		}
		ft_strdel(&line);
	}
	ft_strdel(&line);
}
