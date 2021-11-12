/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:44:23 by ktalbi            #+#    #+#             */
/*   Updated: 2021/11/10 17:48:20 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_game *game)
{
	op_rotate(game->stack_a);
	if (write(1, "ra\n", 3) < 0)
		exit(1);
}

void	rb(t_game *game)
{
	op_rotate(game->stack_b);
	if (write(1, "rb\n", 3) < 0)
		exit(1);
}

void	rr(t_game *game)
{
	op_rotate(game->stack_a);
	op_rotate(game->stack_b);
	if (write(1, "rr\n", 3) < 0)
		exit(1);
}

void	rra(t_game *game)
{
	op_reverse_rotate(game->stack_a);
	if (write(1, "rra\n", 4) < 0)
		exit(1);
}

void	rrb(t_game *game)
{
	op_reverse_rotate(game->stack_b);
	if (write(1, "rrb\n", 4) < 0)
		exit(1);
}
