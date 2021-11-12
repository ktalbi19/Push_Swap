/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:24:40 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/11 18:26:20 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_res1(t_game *game, t_moves *moves)
{
	do_op(game, &rr, moves->rr);
	if (moves->ra > moves->rb)
		do_op(game, &ra, moves->ra - moves->rb);
	else
		do_op(game, &rb, moves->rb - moves->ra);
}

void	ft_do_res2(t_game *game, t_moves *moves)
{
	do_op(game, &rrr, moves->rrr);
	if (moves->rra > moves->rrb)
		do_op(game, &rra, moves->rra - moves->rrb);
	else
		do_op(game, &rrb, moves->rrb - moves->rra);
}

void	ft_do_res3(t_game *game, t_moves *moves)
{
	if (moves->rra > moves->rrb)
	{
		do_op(game, &rrb, moves->rrb);
		do_op(game, &ra, moves->ra);
	}
	else
	{
		do_op(game, &rb, moves->rb);
		do_op(game, &rra, moves->rra);
	}
}

void	apply_moves(t_game *game, t_node *curr_b, t_moves *moves)
{
	int	res;

	res = sum_moves(game, curr_b, moves);
	if (res == moves->res1)
		ft_do_res1(game, moves);
	else if (res == moves->res2)
		ft_do_res2(game, moves);
	else
		ft_do_res3(game, moves);
	pa(game);
}
