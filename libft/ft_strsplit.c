/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigre <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:46:20 by tigre             #+#    #+#             */
/*   Updated: 2018/04/13 19:49:54 by tigre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	i = 0;
	if (s[i] != c && s[i])
		words++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static int		ft_len(char const *s, int k, char c)
{
	int len;

	len = 0;
	while (s[k])
	{
		if (s[k] == c)
			return (len);
		k++;
		len++;
	}
	return (len);
}

static char		**ft_fill(char **tab, char const *s, int size, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (s[k] == c)
			k++;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (ft_len(s, k, c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] != c && s[k])
		{
			tab[i][j] = s[k];
			k++;
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char **tab;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	tab = ft_fill(tab, s, ft_count_words(s, c), c);
	return (tab);
}
