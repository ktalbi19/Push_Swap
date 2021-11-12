/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:48:56 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 17:25:55 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include "linked_list.h"
# include "libft/libft.h"

typedef struct moves
{
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	res1;
	int	res2;
	int	res3;
}				t_moves;

typedef struct game
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}				t_game;

void	ft_main_reduc(t_game *game);
int		contains_not_marked(t_stack *stack);

//game.c
t_game	*init(int argc, const char **argv);
void	ft_fill_stack(int argc, const char **argv,
			t_stack *stack_a, t_stack *stack_b);
void	insert(t_stack *stack, const char *c);
int		mark_all(t_game *game);
int		mark(t_node *start);
void	push_back(t_game *game);
t_node	*prep_moves(t_game *game, t_moves *moves, t_node *curr, t_node *tmp);
int		sum_moves(t_game *game, t_node *curr, t_moves *moves);
void	get_moves(t_game *game, t_node *curr_b, t_moves *moves);
void	calculate_moves(t_moves *moves);
void	order(t_game *game);
void	ft_len_3(t_game *game);

//apply_moves
void	apply_moves(t_game *game, t_node *curr_b, t_moves *moves);
void	ft_do_res3(t_game *game, t_moves *moves);
void	ft_do_res2(t_game *game, t_moves *moves);
void	ft_do_res1(t_game *game, t_moves *moves);

//ft_math
int		ft_max(int a, int b);
int		ft_min3(int a, int b, int c);
int		ft_min(int a, int b);
int		ft_abs(int a);

//operations
void	op_push(t_stack *a, t_stack *b);
void	op_swap(t_stack *stack);
void	op_rotate(t_stack *stack);
void	op_reverse_rotate(t_stack *stack);
void	do_op(t_game *game, void (*op)(t_game *game), int n);
void	sa(t_game *game);
void	sb(t_game *game);
void	ss(t_game *game);
void	pa(t_game *game);
void	pb(t_game *game);
void	ra(t_game *game);
void	rb(t_game *game);
void	rr(t_game *game);
void	rra(t_game *game);
void	rrb(t_game *game);
void	rrr(t_game *game);

//verif value
int		ft_verif_value(int argc, const char **argv);
int		verif_more_double(int argc, const char **argv);
int		verif_more_argc(const char **argv);
int		verif_2_argc(const char **argv);
int		verif_2_double(const char **argv);
int		verif_2_double_suite(int i, int j, char **str, int len);
int		ft_is_int(char *str);
int		ft_is_nbr(char *str);
int		ft_strlen_ptr(char **str);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_free_split(char **split);
//free
void	ft_free_final(t_game *game);

#endif