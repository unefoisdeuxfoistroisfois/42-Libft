# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: britela- <britela-@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 14:39:41 by britela-          #+#    #+#              #
#    Updated: 2025/04/19 14:57:58 by britela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

OBJ = 	ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o \
	ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o \
	ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
	ft_atoi.o ft_calloc.o ft_strdup.o

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
