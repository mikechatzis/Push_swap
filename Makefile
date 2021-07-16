# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 14:49:48 by mchatzip          #+#    #+#              #
#    Updated: 2021/07/16 09:56:17 by mchatzip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = push_swap

LIBFT_PATH = libft/

LIBFT_LIB  = libft.a

SRCS_FILES = checkargs.c processargs.c utils.c utils2.c sort_binary.c \
			utils3.c utils4.c utils5.c push_swap.c\
			 
SRCS_OBJS  = ${SRCS_FILES:.c=.o}

CC         = gcc

CFLAGS     = -Wall -Wextra -Werror

RM         = rm -f

AR         = ar crs

LIBFT_OBJS    = ${LIBFT_PATH}*.o

LIBFTMAKE    = $(MAKE) -C ${LIBFT_PATH}

all:				${NAME}

${NAME}:    ${SRCS_OBJS} pmake
			${CC} -o ${NAME} ${SRCS_OBJS} ${LIBFT_OBJS}
			

pmake:
			${LIBFTMAKE}

clean:
			make -C ${LIBFT_PATH} clean  
			${RM} ${SRCS_OBJS} *.a

fclean: 	clean
			${RM} ${NAME}

re:         fclean all

.PHONY:     all clean fclean re