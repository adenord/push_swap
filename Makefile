# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 07:47:37 by adenord           #+#    #+#              #
#    Updated: 2023/11/13 10:29:29 by adenord          ###   ########.fr        #
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
srcs/logic_core.c srcs/logic_for_3.c srcs/logic_for_5.c srcs/smart_counter_for_5.c \
srcs/loop.c srcs/smart_counters.c srcs/logic_for_100.c \
srcs/smart_index_rotation.c srcs/logic_for_500.c srcs/filler_500.c

SRCS_BONUS := srcs/bonus/read_and_check.c srcs/bonus/push_a_bonus.c \
srcs/bonus/push_b_bonus.c srcs/bonus/rotate_x_bonus.c \
srcs/bonus/rotate_all_bonus.c \
srcs/bonus/reverse_rotate_x_bonus.c \
srcs/bonus/reverse_rotate_all_bonus.c srcs/bonus/swap_x_bonus.c \
srcs/bonus/swap_all_bonus.c

CC := gcc
CPPFLAGS := -I includes/
CFLAGS := -Wall -Wextra -Werror
ARFLAGS := rcs

OBJS := $(SRCS:.c=.o)
OBJS_BONUS := $(SRCS_BONUS:.c=.o)
NAME_LIB := push_swap.a
NAME = push_swap

all : $(NAME)

writing : 
	echo "\033[32mCreating your binary ...\033[0m"

writing_bonus : 
	echo "\033[32mCreating your binary (checker) ...\033[0m"

$(NAME) : writing $(OBJS)
	make -C srcs/libft/
	mv srcs/libft/libft.a .
	mv libft.a $(NAME_LIB)
	$(AR) $(ARFLAGS) $(NAME_LIB) $(OBJS)
	$(CC) $(CPPFLAGS) $(CFLAGS) push_swap.c $(NAME_LIB) -o $(NAME)
	echo "\033[32mDone !\033[0m"

bonus : writing_bonus $(OBJS) $(OBJS_BONUS)
	make -C srcs/libft/
	mv srcs/libft/libft.a .
	mv libft.a $(NAME_LIB)
	$(AR) $(ARFLAGS) $(NAME_LIB) $(OBJS) $(OBJS_BONUS)
	$(CC) $(CPPFLAGS) $(CFLAGS) checker.c $(NAME_LIB) -o checker
	echo "\033[32mDone !\033[0m"

clean :
	echo "\033[32mObjects files have been deleted.\033[0m"
	make clean -C srcs/libft
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	echo "\033[32mBinary have been deleted.\033[0m"
	$(RM) $(NAME_LIB) $(NAME) checker

re : fclean all
