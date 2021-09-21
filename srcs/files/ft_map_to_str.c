/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:12:45 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/09/21 17:17:15 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

char	*ft_map_to_str(char *path)
{
	int		fd;
	int		ret;
	char	*buff;
	int		buff_len;

	buff_len = ft_buff_len(path);
	if (buff_len == -1)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buff = malloc(sizeof(char) * (buff_len + 1));
	if (!buff)
		return (NULL);
	ret = read(fd, buff, buff_len);
	buff[ret] = '\0';
	close(fd);
	return (buff);
}
