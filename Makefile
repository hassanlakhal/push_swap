# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 00:01:41 by hlakhal-          #+#    #+#              #
#    Updated: 2023/02/18 01:34:23 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c check_arg.c utils1.c rules_swap.c rules_rotation.c\
		sorte_3.c rules_push.c

CC		= cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

all:push_swap

push_swap:$(OBJ)

		@make -sC libft/
		@$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o push_swap

clean:
		@make -sC libft/ clean
		@rm -f  $(OBJ)

fclean:	clean
		@make -sC libft/ fclean
		@rm -f $(NAME)

re:		fclean all
