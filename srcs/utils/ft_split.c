/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:52:53 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/09/21 16:52:25 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

int	ft_is_charset(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_arraylen(char *str, char *charset)
{
	int	i;
	int	count;
	int	letter_count;

	i = 0;
	count = 1;
	letter_count = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
			letter_count++;
		if (ft_is_charset(str[i], charset)
			&& !ft_is_charset(str[i + 1], charset))
			count++;
		i++;
	}
	if (letter_count > 0)
		return (count);
	return (0);
}

int	ft_substrlen(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**out;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	out = malloc((ft_arraylen(str, charset) + 1) * sizeof(*out));
	if (!out)
		return (0);
	while (i < ft_strlen(str))
	{
		while (ft_is_charset(str[i], charset))
			i++;
		out[j] = malloc((ft_substrlen(&str[i], charset) + 1) * sizeof(**out));
		if (!out[j])
			return (0);
		k = 0;
		while (ft_substrlen(&str[i], charset))
			out[j][k++] = str[i++];
		out[j++][k] = 0;
	}
	out[j] = 0;
	return (out);
}
