/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:33:54 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 18:31:22 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_moves(t_moves *moves)
{
	moves->rr = ft_min(moves->ra, moves->rb);
	moves->rrr = ft_min(moves->rra, moves->rrb);
	moves->res1 = moves->rr + ft_abs(moves->ra - moves->rb);
	moves->res2 = moves->rrr + ft_abs(moves->rra - moves->rrb);
	moves->res3 = ft_min(moves->ra, moves->rra) + ft_min(moves->rb, moves->rrb);
}

void	get_moves(t_game *game, t_node *curr_b, t_moves *moves)
{
	int		min_a;
	t_node	*curr_a;
	int		i;
	int		idx;

	min_a = min(game->stack_a);
	curr_a = game->stack_a->head;
	i = 1;
	if (curr_b->value < min_a)
	{
		idx = find_index(game->stack_a, min_a);
		moves->rra = game->stack_a->length - idx;
		moves->ra = idx;
	}
	else
	{
		while (!(curr_a->value < curr_b->value
				&& curr_a->next->value > curr_b->value))
		{
			curr_a = curr_a->next;
			i++;
		}
		moves->rra = game->stack_a->length - i;
		moves->ra = i;
	}
}

int	sum_moves(t_game *game, t_node *curr, t_moves *moves)
{
	get_moves(game, curr, moves);
	calculate_moves(moves);
	return (ft_min3(moves->res1, moves->res2, moves->res3));
}

t_node	*prep_moves(t_game *game, t_moves *moves, t_node *curr, t_node *tmp)
{
	int	min_value;
	int	s;

	min_value = +2147483647;
	moves->rb = 0;
	moves->rrb = game->stack_b->length;
	while (moves->rrb >= 0)
	{
		s = sum_moves(game, curr, moves);
		if (s < min_value)
		{
			min_value = s;
			tmp = curr;
		}
		curr = curr->next;
		moves->rrb--;
		moves->rb++;
	}
	return (tmp);
}

void	push_back(t_game *game)
{
	t_node	*curr;
	t_node	*tmp;
	t_moves	*moves;
	int		idx;

	curr = game->stack_b->head;
	tmp = NULL;
	moves = (t_moves *) malloc(sizeof(t_moves));
	if (moves == NULL)
		return ;
	tmp = prep_moves(game, moves, curr, tmp);
	idx = find_index(game->stack_b, tmp->value);
	moves->rb = idx;
	moves->rrb = game->stack_b->length - idx;
	apply_moves(game, tmp, moves);
	free (moves);
}
