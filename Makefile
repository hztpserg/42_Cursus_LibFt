# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 20:30:21 by seantoni          #+#    #+#              #
#    Updated: 2024/01/31 20:35:30 by seantoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_strlen.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_strdup.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BON			= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		= ${SRC:.c=.o}
BON_OBJS	= ${BON:.c=.o}

INCS		= includes
NAME		= libft.a
LIBC		= ar rc
CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

all: ${NAME}

${OBJS}: %.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}
${BON_OBJS}: %.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}
bonus: ${NAME} ${BON_OBJS}
	${LIBC} ${NAME} ${BON_OBJS}

clean:
	${RM} ${OBJS} ${BON_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
