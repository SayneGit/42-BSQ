/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:52:58 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/21 15:52:07 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/bsq.h"
#include <stdio.h>
#define PATH "test_file"

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
	
	if(!ft_buff_len("test_file"))
		ft_putstr("map error\n");
	// FREE HERE
	return (0);
}
