# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: britela- <britela-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 14:39:41 by britela-          #+#    #+#              #
#    Updated: 2025/04/14 18:01:48 by britela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_isalpha.c ft_is_digit.c ft_isalnum.c
OBJ = ft_isalpha.o ft_is_digit.o ft_isalnum.0

RM = rm -rf
LIB = ar rcs #cration librairie

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) #SUPPRESION OBJ

fclean: clean
	$(RM) $(NAME) #SUPPRESION DES OBJ ET LIBFT.a POUR RECOMPILATION PROPRE

re: fclean all

.PHONY: all clean fclean re
