# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 07:47:37 by adenord           #+#    #+#              #
#    Updated: 2023/11/08 14:48:05 by adenord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


MAKEFLAGS += --silent

SRCS := srcs/circle_new.c srcs/circle_add_front.c srcs/circle_add_back.c \
srcs/circle_del_one.c srcs/circle_clear.c srcs/circle_swap.c \
srcs/circle_first_next.c srcs/circle_first_prev.c srcs/push_a.c \
srcs/push_b.c srcs/reverse_rotate_a.c srcs/reverse_rotate_b.c \
srcs/reverse_rotate_all.c srcs/rotate_a.c srcs/rotate_b.c srcs/rotate_all.c \
srcs/swap_a.c srcs/swap_b.c srcs/swap_all.c srcs/circle_display.c \
srcs/circle_size.c srcs/error.c srcs/arg_validator.c srcs/kreator.c \
srcs/no_duplicates.c srcs/indexer.c srcs/clear_mess.c srcs/is_sort_or_not.c \
srcs/logic_core.c srcs/logic_for_3.c srcs/logic_for_4_5.c srcs/smart_rr_counter.c \
srcs/smart_rrr_counter.c srcs/loop.c srcs/smart_sorting_counter.c srcs/logic_for_6_200.c
CC := gcc
CPPFLAGS := -I includes/
CFLAGS := -Wall -Wextra -Werror
ARFLAGS := rcs

OBJS := $(SRCS:.c=.o)
NAME_LIB := push_swap.a
NAME_EXEC = push_swap

all : $(NAME_EXEC)

writing : 
	echo "\033[32mCreating your binary ...\033[0m"

$(NAME_EXEC) : writing $(OBJS)
	make -C srcs/libft/
	mv srcs/libft/libft.a .
	mv libft.a $(NAME_LIB)
	$(AR) $(ARFLAGS) $(NAME_LIB) $(OBJS)
	$(CC) $(CPPFLAGS) $(CFLAGS) push_swap.c $(NAME_LIB) -o $(NAME_EXEC)
	echo "\033[32mDone !\033[0m"

clean :
	echo "\033[32mObjects files have been deleted.\033[0m"
	make clean -C srcs/libft
	$(RM) $(OBJS)

fclean : clean
	echo "\033[32mBinary have been deleted.\033[0m"
	$(RM) $(NAME_LIB)
	$(RM) $(NAME_EXEC)

re : fclean all
