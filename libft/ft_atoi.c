/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:41:12 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 15:20:56 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	int				nbr;
	long long int	check;

	i = 0;
	nbr = 0;
	while (*str == ' ' || *str == '\v' || *str == '\n' ||
			*str == '\f' || *str == '\r' || *str == '\t')
		str++;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		check = (check * 10) + (str[i] - '0');
		i++;
	}
	if (str[0] == '-' && ((check > 0 && i >= 19) || i > 19))
		return (0);
	if ((check < 0 && i >= 19) || i > 19)
		return (-1);
	if (str[0] == '-')
		nbr = -nbr;
	return (nbr);
}
