NAME 			= bsq
SOURCES_FOLDER 	= ./srcs/
HEADER 			= ./includes/
SOURCES 		= $(SOURCES_FOLDER)utils/ft_putchar.c \
					$(SOURCES_FOLDER)utils/ft_putstr.c \
					$(SOURCES_FOLDER)utils/ft_strlen.c \
					$(SOURCES_FOLDER)utils/ft_split.c \
					$(SOURCES_FOLDER)utils/ft_strcpy.c \
					$(SOURCES_FOLDER)utils/ft_strcmp.c \
					$(SOURCES_FOLDER)files/ft_buff_len.c \
					main.c

OBJS = ${SOURCES:.c=.o} 

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror -g3 

$(NAME): ${OBJS}
		gcc ${CFLAGS} -o ${NAME} ${OBJS}

all:	$(NAME)

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: 	fclean all
