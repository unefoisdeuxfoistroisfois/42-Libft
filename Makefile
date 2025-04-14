# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: britela- <britela-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 14:39:41 by britela-          #+#    #+#              #
#    Updated: 2025/04/14 23:52:47 by britela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_isalpha.c ft_is_digit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
OBJ = ft_isalpha.o ft_is_digit.o ft_isalnum.0 ft_isascii.o ft_isprint.o	ft_strlen.o

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
