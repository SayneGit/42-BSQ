/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_matrice.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:17:16 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/09/21 17:13:28 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

char **ft_map_to_matrice(char *path)
{
	char	**matrice;
	char	*str;

	str = ft_map_to_str(path);
	matrice = ft_split(str, "\n");
	free(str);
	return (&matrice[1]);
}
