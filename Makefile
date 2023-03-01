# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 00:01:41 by hlakhal-          #+#    #+#              #
#    Updated: 2023/03/01 18:15:11 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c check_arg.c utils1.c rules_swap.c rules_rotation.c\
		sorte_3.c rules_push.c sorte_4.c sorte_5.c big_sorte_utils.c big_sorte.c\
		big_sorte_1.c

SRCS_BONUS = push_swap_bonus/checker.c push_swap_bonus/get_next_line/get_next_line.c  \
		push_swap_bonus/get_next_line/get_next_line_utils.c\
		push_swap_bonus/rules_push.c push_swap_bonus/rules_rotation.c\
		push_swap_bonus/rules_swap.c push_swap_bonus/utils1.c push_swap_bonus/check_arg.c\

CC		= cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

OBJ1 = $(SRCS_BONUS:.c=.o)

all:push_swap

bonus:push_swap_bonus

push_swap_bonus:$(OBJ1)
		@make -sC libft/
		@$(CC) $(CFLAGS) $(OBJ1) libft/libft.a -o checker

push_swap:$(OBJ)
		@make -sC libft/
		@$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o push_swap

clean:
		@make -sC libft/ clean
		@rm -f  $(OBJ) $(OBJ1)

fclean:	clean
		@make -sC libft/ fclean
		@rm -f $(NAME)

re:		fclean all
