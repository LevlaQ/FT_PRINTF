# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyildiz <gyildiz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 16:00:26 by gyildiz           #+#    #+#              #
#    Updated: 2024/12/06 10:37:44 by gyildiz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =			ft_printf.c ft_spd.c ft_uxX.c
OBJS =			$(SRCS:.c=.o)

NAME =			libftprintf.a
LIBFT =			./libft/libft.a

CC =			cc
CFLAGS =		-Wall -Wextra -Werror

all:			$(LIBFT) $(NAME)

$(NAME):		$(OBJS)
				cp $(LIBFT) $(NAME)
				ar -rcs $(NAME) $(OBJS)

$(LIBFT):
				make -C ./libft all

fclean: clean
				rm -rf $(NAME)
				make -C ./libft fclean

clean: 
				rm -rf $(OBJS)
				make -C ./libft clean

re: fclean all

.PHONY: all fclean clean re
