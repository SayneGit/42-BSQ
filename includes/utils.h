#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

# define MAP_ERROR	"MAP ERROR\n"
# define ARGS_ERROR	"ARGS ERROR\n"

void		ft_putchar(char c);
void		ft_putstr(char *str);

int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);

char		*ft_strcpy(char *dest, char *src);
char		**ft_split(char *str, char *charset);

#endif