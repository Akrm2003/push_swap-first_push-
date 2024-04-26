# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 17:14:53 by louisalah         #+#    #+#              #
#    Updated: 2024/04/26 20:00:59 by asid-ahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = push_swap
# CC = cc
# CFLAGS = -Wall -Wextra -Werror
# SRC = \
# 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c \
# 	ft_lstfirst.c do.c is_sorted.c ft_atoi.c small_sort.c find_smallest.c \
# 	ft_exit.c do_push_names.c do_rotate_names.c do_reverse_rotate_names.c \
# 	do_swap_names.c algo.c find_index_for_right_index.c \
# 	find_cheapest.c main.c


# all: $(NAME)

# $(NAME): $(OBJECTS)
# 		$(CC) -fsanitize=address -g3 -o $(NAME) $(OBJECTS)

# clean:
# 		rm -f $(OBJECTS)

# fclean: clean
# 		rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 #-fsanitize=address
SRC =  \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c \
	ft_lstfirst.c do.c is_sorted.c ft_atoi.c small_sort.c find_smallest.c \
	ft_exit.c do_push_names.c do_rotate_names.c do_reverse_rotate_names.c \
	do_swap_names.c algo.c find_index_for_right_index.c check_input.c \
	find_cheapest.c ft_split.c main.c

OBJECTS = $(SRC:.c=.o)
# OBJECTS_FILE = object_files.txt

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC)  $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): $(SRC)
	$(CC) $(CFLAGS) -c $^
	# echo $(OBJECTS) > $(OBJECTS_FILE)

clean:
	rm -f $(OBJECTS) $(OBJECTS_FILE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
