# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clockhar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 16:31:56 by clockhar          #+#    #+#              #
#   Updated: 2021/10/23 15:43:18 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror -I$(HEADER)


SRC = ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strchr.c\
	  ft_strrchr.c\
      ft_strncmp.c\
      ft_memchr.c\
      ft_memcmp.c\
      ft_strnstr.c\
      ft_atoi.c\
      ft_calloc.c\
      ft_strdup.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_strmapi.c\
	  ft_striteri.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c


OBJECT = $(SRC:%.c= %.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECT) $(HEADER)
	ar rcs $(NAME) $?

%.o	: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJECT)

fclean	:	clean
	@$(RM) $(NAME)

re	:	fclean all
