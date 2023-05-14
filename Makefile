# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 15:36:31 by hait-sal          #+#    #+#              #
#    Updated: 2023/05/14 12:23:10 by hait-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlen.c  ft_toupper.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lst_p1.c ft_lst_p2.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)



$(NAME) : $(OBJ) libft.h
	@echo "\033[92mfinishing  ✓\033[0m"
	@ar -rc $(NAME) $(OBJ)

bonus : $(OBJ_BONUS) libft.h
	@echo "\033[92mfinishing bonus      ✓\033[0m"
	@ar -rc $(NAME) $(OBJ_BONUS) $(OBJ)
	
%.o : %.c
	@cc $(FLAGS) -c $^ -o $@

clean :
	@echo "\033[92mclean      ✓\033[0m"
	@rm -f *.o

fclean : clean
	@echo "\033[92mfclean     ✓\033[0m"
	@rm -f libft.a
	
re : fclean all
