# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 14:20:02 by ael-mans          #+#    #+#              #
#    Updated: 2024/11/14 15:35:12 by ael-mans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	  ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
	  ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	  ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c

BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	   ft_lstsize_bonus.c ft_lstlast_bonus.c \
	   ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c \

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

NAME = libft.a

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(NAME) $(BOBJ)
	ar rcs $(NAME) $(OBJ) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean bonus
