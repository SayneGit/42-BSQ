/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:52:58 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/21 17:16:02 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/bsq.h"
#include <stdio.h>
#define PATH "./map"

int	main(int argc, char *argv[])
{
	int	i;

	(void)argv;
	i = 0;
	if (argc <= 1)
	{
		ft_putstr(ARGS_ERROR);
		return (0);
	}

//	printf("\n%s", ft_map_to_str(PATH));
	printf("\n%s", ft_map_to_matrice(PATH)[0]);
	// FREE HERE
	return (0);
}
