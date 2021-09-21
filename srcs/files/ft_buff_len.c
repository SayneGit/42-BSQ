/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:30:11 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/09/21 15:43:32 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/bsq.h"

int	ft_buff_len(char *path)
{
	int		count;
	char	buff[1];
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	count = 0;
	while (read(fd, buff, 1))
		count++;
	close(fd);
	return (count);
}
