/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:52:58 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/20 19:10:39 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	main(int argc, char *argv[])
{
	int	i;

	i = -1;
	if (argc <= 1)
	{
		ft_putstr(ARGS_ERROR);
	}
	while (argv[++i])
	{
		// Implement backtracking here
	}
	// FREE HERE
	return (0);
}
