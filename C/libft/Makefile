# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 15:15:02 by kkarlene          #+#    #+#              #
#    Updated: 2019/09/25 18:13:07 by kkarlene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
NAME = libft.a
FILE_C = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
         ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
         ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
         ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
         ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
         ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
         ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_nospaces.c ft_lstnew.c ft_lstdelone.c \
         ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_listsize.c ft_lstmap.c \

FILE_O = $(addsuffix .o, $(basename $(FILE_C)))

all: $(NAME)

$(NAME): $(FILE_O) 
	@ar rc $(NAME) $(FILE_O)

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<
clean: 
	@rm -f $(FILE_O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
