/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weight_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:56:23 by ghtouman          #+#    #+#             */
/*   Updated: 2019/02/07 17:26:29 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int	place_weight(t_struct *s, int n, int y, int x)
{
	int		i;
	int		tmp;
	int		ret;

	i = -1;
	tmp = --y;
	x--;
	ret = 0;
	while (++i <= 8)
	{
		if (x >= 0 && y >= 0 && x < s->w_map && y < s->h_map)
			if (s->map[y][x] == 0)
			{
				s->map[y][x] = n;
				ret = 1;
			}
		if (i == 2 || i == 5)
		{
			x++;
			y = tmp;
		}
		else
			y++;
	}
	return (ret);
}

void		weight_filler(t_struct *s)
{
	int		n;
	int		y;
	int		x;
	int		check;
	int		never;

	never = 1;
	n = 1;
	while (1)
	{
		if (never == 0)
			never = 2;
		else
			never = 0;
		y = 0;
		check = 0;
		while (y < s->h_map)
		{
			x = 0;
			while (x < s->w_map)
			{
				if (s->map[y][x] == 0)
					check = 1;
				if (s->map[y][x] == -1)
					if (place_weight(s, n, y, x))
						never = 1;
				if (s->map[y][x] == n - 1 && n > 1)
					if (place_weight(s, n, y, x))
						never = 1;
				if (s->map[y][x] == -2 && never == 2 && check)
					place_weight(s, n, y, x);
				x++;
			}
			y++;
		}
		if (!check)
			break ;
		n++;
	}
}
