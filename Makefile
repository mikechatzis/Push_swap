# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 14:49:48 by mchatzip          #+#    #+#              #
#    Updated: 2021/07/20 20:16:48 by mchatzip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME       = push_swap

LIBFT_PATH = libft/

SRCS_FILES = checkargs.c processargs.c utils.c utils2.c sort_binary.c \
			utils3.c utils4.c utils5.c push_swap.c
			 
SRCS_OBJS  = checkargs.o processargs.o utils.o utils2.o sort_binary.o \
			utils3.o utils4.o utils5.o push_swap.o

CC         = gcc

CFLAGS     = -Wall -Wextra -Werror

RM         = rm -f

AR         = ar crs

LIBFT_OBJS    = ${LIBFT_PATH}*.o

LIBFTMAKE    = make -C ${LIBFT_PATH}

all:		pmake ${NAME}
${NAME}:     ${SRCS_OBJS} 
		 ${CC} ${CFLAGS} -o ${NAME} ${SRCS_OBJS} ${LIBFT_OBJS};

pmake:
			${LIBFTMAKE}

clean:
			make clean -C ${LIBFT_PATH}   
			${RM} ${SRCS_OBJS}

fclean: 	clean
			${RM} ${NAME}

re:         fclean all

.PHONY:     all clean fclean re