/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:26:16 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/09/21 17:26:53 by pdal-mol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

/* ========== INCLUDES ========== */

# include <unistd.h>
# include <stdlib.h>
#include <fcntl.h>

/* ========== STRUCT ========== */

typedef	struct s_config
{
	int		row_len;
	int		col_len;
	char	empty_field;
	char	square_field;
	char	obstacle;

}			t_config;

/* ========== MACROS ========== */

# define MAP_ERROR	"MAP ERROR\n"
# define ARGS_ERROR	"ARGS ERROR\n"

/* ========== UTILS ========== */

void		ft_putchar(char c);
void		ft_putstr(char *str);

int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);

char		*ft_strcpy(char *dest, char *src);
char		**ft_split(char *str, char *charset);

/* ========== FILES ========== */

int		ft_buff_len(char *path);
char	*ft_map_to_str(char *path);
char	**ft_map_to_matrice(char *path);

#endif
