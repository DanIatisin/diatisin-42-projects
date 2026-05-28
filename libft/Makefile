NAME = libft.a

FUNCTIONS = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c\
ft_memset.c ft_strlen.c ft_isalnum.c ft_isascii.c\
ft_isprint.c ft_memmove.c ft_strlcat.c ft_strlcpy.c\
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c

SRC = ${FUNCTIONS}

OBJS = ${SRC:.c=.o}

CC = gcc

RM = rm -fi

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -I .

.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
