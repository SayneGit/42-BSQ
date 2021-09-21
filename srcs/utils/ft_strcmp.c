/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:45:18 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/21 15:37:25 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

int	ft_strcmp(char *s1, char *s2)

{
	int	i;
	int	len_s1;
	int	len_s2;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 != len_s2)
		return (1);
	else
	{
		while (s1[i] || s2[i])
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (0);
}
