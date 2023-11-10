/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 07:45:53 by adenord           #+#    #+#             */
/*   Updated: 2023/11/10 08:32:55 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../srcs/libft/libft.h"
# include <limits.h>

typedef struct s_circle {
	int					value;
	int					order;
	struct s_circle		*next;
	struct s_circle		*prev;
}						t_circle;

t_circle	*circle_new(int value);
void		circle_add_front(t_circle **first, t_circle *new);
void		circle_add_back(t_circle **circle, t_circle *new);
void		circle_del_one(t_circle **first, t_circle *current);
void		circle_clear(t_circle **circle);
void		circle_swap(t_circle **first);
void		circle_first_next(t_circle **circle);
void		circle_first_prev(t_circle **circle);
void		circle_display(t_circle **a, t_circle **b);
size_t		circle_size(t_circle *circle);
void		push_a(t_circle **a, t_circle **b);
void		push_b(t_circle **a, t_circle **b);
void		reverse_rotate_a(t_circle **a);
void		reverse_rotate_all(t_circle **a, t_circle **b);
void		reverse_rotate_b(t_circle **b);
void		rotate_a(t_circle **a);
void		rotate_b(t_circle **b);
void		rotate_all(t_circle **a, t_circle **b);
void		swap_a(t_circle **a);
void		swap_all(t_circle **a, t_circle **b);
void		swap_b(t_circle **b);
int			error(void);
int			arg_validator(int argc, char **argv);
t_circle	*kreator(int argc, char **argv);
int			no_duplicates(t_circle **circle);
void		indexer(t_circle **circle, size_t len);
void		clear_mess(t_circle **a, t_circle **b);
int			is_final_sort_or_not(t_circle *a);
int			is_sort_or_not(t_circle *a);
void		logic_core(t_circle **a, t_circle **b);
void		logic_for_3(t_circle **a);
void		logic_for_4_5(t_circle **a, t_circle **b, size_t perimeter);
int			smart_rr_counter(t_circle **a, t_circle **b);
int			smart_rrr_counter(t_circle **a, t_circle **b);
void		reverse_rotate_loop(t_circle **a, int loop_rrr, int flag);
void		rotate_loop(t_circle **a, int loop_rr, int flag);
int			smart_s_rrr_counter(t_circle **a);
int			smart_s_rr_counter(t_circle **a);
void		logic_for_6_200(t_circle **a, t_circle **b, size_t perimeter);
void		rot_x(t_circle **a, t_circle **b, int index);

#endif
